#ifndef OAgent_ED_h
#define OAgent_ED_h
#include "Streaming.h"
#include <MgsModbus.h>

#include "XBee.h"   // Include header for xbee api
#include "OGraph_ED.h"

#define ED_HEADER                        0x7550 // Unicast Primal-dual header is ascii uP

#define SYNC_BEGIN_HEADER                0x7342	// HRTS sync_begin header is ascii sB
#define SYNC_RESPONSE_HEADER             0x7352 // HRTS sync_response header is ascii sR
#define SYNC_FINAL_HEADER                0x7346	// HRTS sync_final header is ascii sF
#define SYNC_TIMEOUT                     2500    // (was 2500) time out period to wait for response to HRTS sync_begin broadcast in milliseconds
#define ACK_TIMEOUT                      500    // time out period to wait for an ack

#define SYNC_RETRY_PERIOD                250    // period to wait between broadcasting HRTS sync_begin packet
#define SYNC_ERROR                       8      // calibrate for small amount of error
#define RESYNC_HEADER                    0x7353 // used as the header to indicate the resync process is taking place (1st transaction)
#define RESYNC_RESPONSE_HEADER           0x7354
#define RESYNC_HEADER_FINAL              0x7355 //used as the header to indicate the resync process is taking place (final transaction)     
#define RESYNC_TOTAL_TIME                500    //total time resync period will last

class OAgent_ED {
	public:
        /// Constructors
		// OAgent_ED();
        // OAgent_ED(XBee * xbee, OGraph_ED * G, bool leader = false, bool quiet = true);
        OAgent_ED(XBee * xbee, ZBRxResponse * rx, MgsModbus *Mb, OGraph_ED * G, bool leader = false, bool quiet = true);
        //OAgent_ED(XBee * xbee, ZBRxResponse * rx, OGraph_ED * G, bool leader = false, bool quiet = true, int RS = 0);
        
        /// Methods
        
        // Get / set leader directive
        inline void setLeader(bool leader) { _leader = leader; }
        inline bool isLeader() { return _leader; }
        
        // Get / set quiet directive
        inline void setQuiet(bool quiet) { _quiet = quiet; }
        inline bool isQuiet() { return _quiet; }
    
        
        // Economic dispatch
        bool EconomicDispatch(uint8_t node_ip);
        void init_ed(double &lambda,double &nu,double &y,double *sum_lambda,double *sum_nu,double *sum_y,uint8_t num_nodes,uint8_t out_deg,uint8_t deg,double P,double Pd);
        float _clip(float x, float xmin, float xmax);
        double _clip_double(double x, double xmin, double xmax);
        double _max(double x,double y){
            if (x>y) return x;
            else return y;
        }
        void _SendPacket(double *vars_ed, float *vars_reg, uint16_t time);
        double* _getPacket_ed();
        float* _getPacket_reg();
        void DELAY(unsigned long time_delay){
            unsigned long cur_time = millis();
            while (millis()<cur_time+time_delay){}
        }
        void _print_(String s,float val,uint8_t precision){

            Serial<<s<<" "; Serial.print(val,precision); Serial<<endl; DELAY(5);
        }
        void _print1Darray_(float* a, uint8_t size, uint8_t precision){
            // int n = sizeof(a)/sizeof(a[0]);
            // Serial<<s<<":"<<endl;
            for (int i=0;i<size;i++){
                Serial.print(*(a+i),precision);Serial<<" ";
            }
            Serial<<endl;
            DELAY(5);
        }

        void print_ed_reg_status(uint16_t time_instant, float P, float x, float Pref_reg, float reg_ratio, uint16_t *count, uint8_t size){
            Serial<<time_instant<<" ";Serial.print(P);Serial<<" ";Serial.print(x,5);Serial<<" ";Serial.print(Pref_reg);Serial<<" ";Serial.print(reg_ratio,5);Serial<<" ";
            for (int i=0;i<size;i++){
                Serial.print(*(count+i));Serial<<" ";
            }
            Serial<<endl;
            DELAY(5);
        }

        // HRT Synchronization methods
        bool sync(uint8_t attempts = 10);
        inline bool isSynced() { return _synced; }
               

	private:
        // Properties
        // XBee stuff
        XBee * _xbee;
        ZBRxResponse * _rx;
        ZBTxRequest _zbTx;
        ZBTxStatusResponse _txStatus;
        XBeeAddress64 _broadcastAddress;
        uint32_t _aMsb;
        uint32_t _availableAgentLsb[8];

        MgsModbus *_Mb;
        
        OGraph_ED * _G;

        //Agent properties
        bool _leader;
        bool _quiet;
        bool _synced;
        long _offset;
        unsigned long _start_millis;
        uint8_t _iterations;
        uint16_t _period;
        uint16_t _windowsPerPeriod;
        
        // Synchronization helper functions
        bool _leaderSync();
        bool _targetSync(unsigned long tTwo);
        bool _nonTargetSync(unsigned long tTwo);
        unsigned long _broadcastSyncBeginPacket(uint8_t i);
        void _broadcastSyncFinalPacket(unsigned long tTwo, long d);
        bool _unicastSyncResponsePacket(unsigned long tTwo);
        inline int /*bool*/ _waitForSyncBeginPacket(unsigned long &rxTime) { return _waitForPacket2(SYNC_BEGIN_HEADER, RESYNC_HEADER,rxTime,true);  /*_waitForPacket(SYNC_BEGIN_HEADER,rxTime,true,-1);*/ }
        inline bool _waitForSyncResponsePacket(unsigned long &rxTime) { return _waitForPacket(SYNC_RESPONSE_HEADER,rxTime,false,SYNC_TIMEOUT); }
        inline bool _waitForSyncFinalPacket(int timeout = -1) { return _waitForPacket(SYNC_FINAL_HEADER,true,timeout); }
        bool _isTargetNode();      
        void _broadcastResyncResponsePacket(unsigned long t2, unsigned long node_id);
        int  _waitForPacket2(uint16_t header1, uint16_t header2, unsigned long &rxTime, bool broadcast = false);
        bool  _packetAvailable2(unsigned long &rxTime, bool broadcast = false);
        bool _waitForResyncFinalPacket(unsigned long timeout);
        
        // General xbee methods
        bool _validPacketAvailable();
        bool _packetAvailable(uint16_t header, bool broadcast = false);
        bool _packetAvailable(uint16_t header, unsigned long &rxTime, bool broadcast = false);
        uint16_t _packetAvailable(bool broadcast);
        bool _packetAvailableHelper(uint16_t header, bool broadcast = false);
        bool _packetACKed(int timeout);
        inline uint16_t _getHeaderFromPacket() { return (uint16_t(_rx->getData(1)) << 8) + _rx->getData(0); }

         bool _waitForPacket(uint16_t header, unsigned long &rxTime, bool broadcast = false, int timeout = -1);
        bool _waitForPacket(uint16_t header, bool broadcast = false, int timeout = -1);
                
        // Generate transmit time
        uint16_t _genTxTime(uint16_t iterationPeriod, uint8_t ITF);
        uint16_t _genTxTime(uint16_t iterationPeriod, uint8_t ITF, int seed);
        
        // General coordination helper functions
        bool _waitForNeighborPacket(uint8_t &neighborID, uint16_t header, bool broadcast, int timeout);
        uint32_t _getUint32_tFromPacket(uint8_t &lsbByteNumber);
        inline long _getLongFromPacket(uint8_t &lsbByteNumber) { return long(_getUint32_tFromPacket(lsbByteNumber)); }
        uint8_t _addUint32_tToPayload(uint32_t data, uint8_t payload[], uint8_t ptr);
        
        // Constructor helper function
        void _prepareOAgent_ED(XBee * xbee, ZBRxResponse * rx, MgsModbus *Mb, OGraph_ED * G, bool leader = false, bool quiet = true);
};

#endif // OAgent_ED_h