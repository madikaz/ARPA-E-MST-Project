/*
 *  OGraph_OPF.h
 *  
 *
 *  Created by Stanton T. Cady on 06/15/12
 *  Last edited by Stanton T. Cady on 07/30/12
 *
 */

#ifndef OGraph_OPF_h
#define OGraph_OPF_h

#define INVALID_ARRAY_INDEX 255
#define NUM_BROADCAST_LAMBDA 3
#define LONG_ERROR 2147483647

#define NUM_REMOTE_VERTICES 22      //ENSURE THAT THESE PARAMETERS ARE SET APPROPRIATELY BASED ON GRAPH STRUCTURE
#define NUM_IN_NEIGHBORS 9         //maximum allowed number of neighbors (does not include itself)
//#define NULL 0

//#define VERBOSE

#include "../XBee/XBee.h" // Include header for xbee api
//#include "LinkedList.h" //Include header for linked list

class OVertex {
    public:
        // Constructors
        OVertex();
        OVertex(uint32_t aLsb);
        OVertex(XBeeAddress64 a);

        // Address
        inline uint32_t getAddressLsb() { return _aLsb; }

    protected:
        // Properties
        uint32_t _aLsb;
        uint8_t _nodeID;

        // Helper functions
        void _prepareOVertex(uint32_t aLsb, uint8_t nodeID);
};


class OLocalVertex : public OVertex {
    public:
        // Constructors
        OLocalVertex();
        OLocalVertex(uint32_t aLsb, uint8_t nodeID);
        OLocalVertex(XBeeAddress64 a, uint8_t nodeID);

        // In-degree methods
        inline uint8_t getInDegree() { return _inDegree; }
        inline void incrementInDegree() { _inDegree++; }
        inline void decrementInDegree() { _inDegree--; }

        // Out-degree
        inline void setOutDegree(uint8_t Dout) { _outDegree = Dout; }
        inline uint8_t getOutDegree() { return _outDegree; }
        inline void incrementOutDegree() {  _outDegree++; }
        inline void decrementOutDegree() { _outDegree--; }

        // Optimal dispatch functions
        long g(long lambda);

        //nodeID
        inline int getID() {return _nodeID; }
        //get leader and deputy ID
        //inline int getleaderID() {return _leaderID; }
        //inline int getdeputyID() {return _deputyID; }
        //set leader and deputy ID
        //inline void setleaderID(int leaderID) {_leaderID = leaderID; }
        //inline void setdeputyID(int deputyID) {_deputyID = deputyID; }
        //use Linked List _l to choose an inheritor
        //int chooseInheritor();

        //use linked list to set number of neighbors
        inline void setNeighborSize(int neighborSize) {_neighborSize = neighborSize; }
        //get number of neighbors
        inline int getNeighborSize() {return _neighborSize; }
        //Status
        inline uint8_t getStatus(uint8_t neighborID) {return _status[neighborID-1]; }                       //get status 
        inline uint8_t * getStatusP() {return _statusP; }                                                   //get status pointer
        inline void setStatus(uint8_t neighborID, uint8_t status) { _status[neighborID-1] = status;  } 
        
        // States Y and Z
        inline void setY(float y) { _y = y; }
        inline void addToY(float increment) { _y += increment; }
        inline float getY() { return _y; }
        inline void clearY() { _y = 0; }

        inline void setZ(float z) { _z = z; }
        inline void addToZ(float increment) { _z += increment; }
        inline float getZ() { return _z; }
        inline void clearZ() { _z = 0; }

        // Get directive for primal dual algorithm
        inline bool isGenBus() { return _genBus; }
        inline float getActiveSetpoint() { return _p; }
        inline float getReactiveSetpoint() { return _q; }
        inline float getActiveDemand() { return _pd; }
        inline float getReactiveDemand() { return _qd; }
        inline float getActiveBalance() { return _bp; }
        inline float getReactiveBalance() { return _bq; }
        inline float getSquareVoltage() { return _sqV; }
        inline float getMu() { return _mu; }
        inline float getNu() { return _nu; }
        inline float getWv() { return _Wv; }
        inline float getWp() { return _Wp; }
        inline float getWq() { return _Wq; }
        inline float getDp() { return _Dp; }
        inline float getDq() { return _Dq; }

        // Get directive for primal dual algorithms buffer data
        inline float getBufferActiveSetpoint(uint8_t k) { return _buffer_P[k]; }
        inline float getBufferReactiveSetpoint(uint8_t k) { return _buffer_Q[k]; }
        inline float getBufferActiveBalance(uint8_t k) { return _buffer_bP[k]; }
        inline float getBufferReactiveBalance(uint8_t k) { return _buffer_bQ[k]; }
        inline float getBufferSquareVoltage(uint8_t k) { return _buffer_sqV[k]; }
        inline float getBufferMu(uint8_t k) { return _buffer_mu[k]; }
        inline float getBufferNu(uint8_t k) { return _buffer_nu[k]; }

        // Set directive for economic dispatch algorithm
        inline float getLambda() { return _lambda; }
        inline float getGamma() { return _gamma; }
        inline float getGammaTMP() { return _gammaTMP; }

        // Set directive for primal dual algorithm
        inline void setGenBusStatus(bool genBus) {_genBus = genBus; }
        inline void setActiveSetpoint(float p) {_p = p; }
        inline void setReactiveSetpoint(float q) {_q = q; }
        inline void setActiveDemand(float pd) {_pd = pd; }
        inline void setReactiveDemand(float qd) {_qd = qd; }
        inline void setActiveBalance(float bp) {_bp = bp; }
        inline void setReactiveBalance(float bq) {_bq = bq; }
        inline void setSquareVoltage(float sqV) {_sqV = sqV; }
        inline void setMu(float mu) {_mu = mu; }
        inline void setNu(float nu) {_nu = nu; }
        inline void setVoltageWeight(float Wv) {_Wv = Wv; }
        inline void setActiveBalanceWeight(float Wp) {_Wp = Wp; }
        inline void setReactiveBalanceWeight(float Wq) {_Wq = Wq; }
        inline void setActivePowerWeight(float Dp) {_Dp = Dp; }
        inline void setReactivePowerWeight(float Dq) {_Dq = Dq; }

        // Set directive for primal dual algorithms buffer data
        inline void setBufferActiveSetpoint(uint8_t k, float p) {_buffer_P[k] = p; }
        inline void setBufferReactiveSetpoint(uint8_t k, float q) {_buffer_Q[k] = q; }
        inline void setBufferActiveBalance(uint8_t k, float bp) {_buffer_bP[k] = bp; }
        inline void setBufferReactiveBalance(uint8_t k, float bq) {_buffer_bQ[k] = bq; }
        inline void setBufferSquareVoltage(uint8_t k, float sqV) {_buffer_sqV[k] = sqV; }
        inline void setBufferMu(uint8_t k, float mu) {_buffer_mu[k] = mu; }
        inline void setBufferNu(uint8_t k, float nu) {_buffer_nu[k] = nu; }

        // Set directive for economic dispatch algorithm
        inline void setLambda(float lambda) { _lambda = lambda; }
        inline void setGamma(float gamma) { _gamma = gamma; }
        inline void setGammaTMP(float gammaTMP) { _gammaTMP = gammaTMP; }
        
	protected:
        /// Properties

        //status information based on interaction with other nodes in network; 0 - Not a neighbor, 1 - neighbor but offline link, 2 - neighbor with  online link
        uint8_t _status[NUM_REMOTE_VERTICES];
        //Pointer for node status (added in by Olaolu)
        uint8_t *_statusP;
        //leader and deputy ID
        //int _leaderID;
        //int _deputyID;
        //Number of online neighbors
        int _neighborSize;

        // Ratio-consensus states
        float _y;
        float _z;

        // Graph degrees
        uint8_t _inDegree;
        uint8_t _outDegree;
        /// Methods
        void _prepareOLocalVertex(uint32_t aLsb, uint8_t nodeID);

        //variables for Economic Dispatch Algorithm
        float _lambda;
        float _gamma;
        float _gammaTMP;

        //vertex property for primal dual algorithm
        bool _genBus; //bus type (generator bus or load bus)

        //Decision variables for primal dual algorithm
        float _p; //per-unit active power setpoint
        float _q; //per-unit reactive power setpoint
        float _pd; //per-unit active power demand
        float _qd; //per-unit reactive power demand
        float _bp; //per-unit active power balance
        float _bq; //per-unit reactive power balance
        float _sqV;  //per-unit voltage magnitude squared
        float _mu; //lagrange multiplier for active power balance
        float _nu; //lagrange multiplier for reactive power balance

        //Weights for primal dual algorithm
        float _Wv;  //voltage weight
        float _Wp; //active power balance weight
        float _Wq; //reactive power balance weight
        float _Dp; //active power injection weight
        float _Dq; //reactive power injection weight

        //Olaolu's addition        
        float _buffer_P[200];
        float _buffer_Q[200];
        float _buffer_bP[200];
        float _buffer_bQ[200];
        float _buffer_sqV[200];
        float _buffer_mu[200];
        float _buffer_nu[200];
};

class OLocalReserveVertex : public OLocalVertex {
	public:
		OLocalReserveVertex();
        OLocalReserveVertex(uint32_t aLsb, uint8_t nodeID);
        OLocalReserveVertex(XBeeAddress64 a, uint8_t nodeID);
		inline bool getLimitExceeded() { return _limitExceeded; }
		inline void setLimitExceeded(bool limitExceeded) { _limitExceeded = limitExceeded; }
		inline float getLimitGamma() { return _limitGamma; }
		inline void setLimitGamma(float limitGamma) { _limitGamma = limitGamma; }
	private:
		/// Properties
        uint8_t _nodeID;
		bool _limitExceeded;
		float _limitGamma;
		/// Methods
		void _prepareOLocalReserveVertex(uint32_t aLsb, uint8_t nodeID);
};

class ORemoteVertex : public OVertex {
    public:
        // Constructors
        ORemoteVertex();
        ORemoteVertex(XBeeAddress64 a, uint8_t neighborID, bool inNeighbor = false);
        ORemoteVertex(uint32_t aLsb, uint8_t neighborID, bool inNeighbor = false);
        ORemoteVertex(XBeeAddress64 a, uint8_t neighborID, float r, float x, bool inNeighbor = false);
        ORemoteVertex(uint32_t aLsb, uint8_t neighborID, float r , float x, bool inNeighbor = false);
        
        // Get directive for inNeighbor
        inline bool isInNeighbor() { return _inNeighbor; }
        inline uint8_t getIndex() { return _index; }
        
        // Running sum state for robust algorithm
        inline void setSumY(float sumY) { _sumY = sumY; }
        inline float getSumY() { return _sumY; }
        inline void clearSumY() { _sumY = 0; }

        inline void setSumZ(float sumZ) { _sumZ = sumZ; }
        inline float getSumZ() { return _sumZ; }
        inline void clearSumZ() { _sumZ = 0; }

        // Get directive for primal dual algorithm
        inline float getResistance() { return _r; }
        inline float getReactance() { return _x; }
        
        inline float getActiveFlow() { return _fp; }
        inline float getReactiveFlow() { return _fq; }
        inline float getLambda() { return _lambda; }
        
        inline float getActiveFlowGradient() { return _gfp; }
        inline float getReactiveFlowGradient() { return _gfq; }
        inline float getLambdaGradient() { return _glambda; }        
        
        inline float getActiveFlowGradientTMP() { return _gfpTMP; }
        inline float getReactiveFlowGradientTMP() { return _gfqTMP; }
        inline float getLambdaGradientTMP() { return _glambdaTMP; }        
        
        inline float getNodeActiveFlowGradient() { return _gfpNode; }
        inline float getNodeReactiveFlowGradient() { return _gfqNode; }
        inline float getNodeLambdaGradient() { return _glambdaNode; }
                
        inline float getNeighborActiveFlowGradient() { return _gfpNeighbor; }
        inline float getNeighborReactiveFlowGradient() { return _gfqNeighbor; }
        inline float getNeighborLambdaGradient() { return _glambdaNeighbor; }
        
        inline float getNodeActiveFlow() { return _fpNode; }
        inline float getNodeReactiveFlow() { return _fqNode; }
        inline float getNodeLambda() { return _lambdaNode; }

        inline float getNeighborActiveFlow() { return _fpNeighbor; }
        inline float getNeighborReactiveFlow() { return _fqNeighbor; }
        inline float getNeighborLambda() { return _lambdaNeighbor; }

        inline bool getNodeFlag() { return _nodeFlag; }
        inline bool getNeighborFlag() { return _neighborFlag; }

        inline bool getLinkStatus() { return _linkStatus; }

        // Get directive for primal dual algorithms buffer data
        inline float getBufferActiveFlow(uint8_t k) { return _buffer_fP[k]; }
        inline float getBufferReactiveFlow(uint8_t k) { return _buffer_fQ[k]; }
        inline float getBufferLambda(uint8_t k) { return _buffer_lambda[k]; }

        // Get directive for economic dispatch ratio consensus algorithm 
        inline float getSumLambda() { return _sumLambda; }
        inline float getSumNu() { return _sumNu; }
        inline float getSumGamma() { return _sumGamma; }
        
        // Set directive for primal dual algorithm
        inline void setResistance(float r) {_r = r; }
        inline void setReactance(float x) {_x = x; }

        inline void setActiveFlow(float fp) {_fp = fp; }
        inline void setReactiveFlow(float fq) {_fq = fq; }
        inline void setLambda(float lambda) {_lambda = lambda; }

        inline void setActiveFlowGradient(float gfp) {_gfp = gfp; }
        inline void setReactiveFlowGradient(float gfq) {_gfq = gfq; }
        inline void setLambdaGradient(float glambda) {_glambda = glambda; }

        inline void setActiveFlowGradientTMP(float gfpTMP) {_gfpTMP = gfpTMP; }
        inline void setReactiveFlowGradientTMP(float gfqTMP) {_gfqTMP = gfqTMP; }
        inline void setLambdaGradientTMP(float glambdaTMP) {_glambdaTMP = glambdaTMP; }

        inline void setNodeActiveFlowGradient(float gfpNode) {_gfpNode = gfpNode; }
        inline void setNodeReactiveFlowGradient(float gfqNode) {_gfqNode = gfqNode; }
        inline void setNodeLambdaGradient(float glambdaNode) {_glambdaNode = glambdaNode; }

        inline void setNeighborActiveFlowGradient(float gfpNeighbor) {_gfpNeighbor = gfpNeighbor; }
        inline void setNeighborReactiveFlowGradient(float gfqNeighbor) {_gfqNeighbor = gfqNeighbor; }
        inline void setNeighborLambdaGradient(float glambdaNeighbor) {_glambdaNeighbor = glambdaNeighbor; }

        inline void setNodeActiveFlow(float fpNode) {_fpNode = fpNode; }
        inline void setNodeReactiveFlow(float fqNode) {_fqNode = fqNode; }
        inline void setNodeLambda(float lambdaNode) {_lambdaNode = lambdaNode; }

        inline void setNeighborActiveFlow(float fpNeighbor) {_fpNeighbor = fpNeighbor; }
        inline void setNeighborReactiveFlow(float fqNeighbor) {_fqNeighbor = fqNeighbor; }
        inline void setNeighborLambda(float lambdaNeighbor) {_lambdaNeighbor = lambdaNeighbor; }

        inline void setNodeFlag(bool nodeFlag) {_nodeFlag = nodeFlag; }
        inline void setNeighborFlag(bool neighborFlag) {_neighborFlag = neighborFlag; }

        inline void setLinkStatus(bool linkStatus) {_linkStatus = linkStatus; }

        // Set directive for primal dual algorithms buffer data
        inline void setBufferActiveFlow(uint8_t k, float fP) {_buffer_fP[k] = fP; }
        inline void setBufferReactiveFlow(uint8_t k, float fQ) {_buffer_fQ[k] = fQ; }
        inline void setBufferLambda(uint8_t k, float lambda) {_buffer_lambda[k] = lambda; }

        // Set directive for economic dispatch ratio consensus algorithm 
        inline void setSumLambda(float sumLambda) { _sumLambda = sumLambda; }
        inline void setSumNu(float sumNu) { _sumNu = sumNu; }
        inline void setSumGamma(float sumGamma) { _sumGamma = sumGamma; }
    private:
        /// Properties
        bool _inNeighbor;
        uint8_t _index;
        /// Methods
        // Constructor helper
        void _prepareORemoteVertex(uint32_t aLsb = 0x0, uint8_t neighborID = 0, float r = 0, float x = 0, bool inNeighbor = false);

        //ratio consensus running sum states
        float _sumY;
        float _sumZ;

        //ratio consensus running sum states for economic dispatch algorithm
        float _sumLambda;   //running sum of Lambda for remotevertex
        float _sumNu;       //running sum of Nu for remotevertex
        float _sumGamma;    //running sum of Gamma for remotevertex

        //vertex properties for primal dual algorithm
        float _r;       //per-unit resistance of electrical link
        float _x;       //per-unit reactance of electrical link

        //Decision variables for primal dual algorithm
        float _fp; //per-unit active flow along electrical link
        float _fq; //per-unit reactive flow along electrical link
        float _lambda; //lagrange multiplier for LinDistFlow

        //gradient variables for primal dual algorithm
        float _gfp; //per-unit active flow along electrical link
        float _gfq; //per-unit reactive flow along electrical link
        float _glambda; //lagrange multiplier for LinDistFlow

        //gradient variables for primal dual algorithm
        float _gfpTMP; //per-unit active flow along electrical link
        float _gfqTMP; //per-unit reactive flow along electrical link
        float _glambdaTMP; //lagrange multiplier for LinDistFlow

        //gradient local estimate variable for primal dual algorithm
        float _gfpNode; //per-unit active flow along electrical link
        float _gfqNode; //per-unit reactive flow along electrical link
        float _glambdaNode; //lagrange multiplier for LinDistFlow

        //gradient remote estimate variable for primal dual algorithm
        float _gfpNeighbor; //per-unit active flow along electrical link
        float _gfqNeighbor; //per-unit reactive flow along electrical link
        float _glambdaNeighbor; //lagrange multiplier for LinDistFlow

        float _fpNode; //local estimate of per-unit active flow along electrical link
        float _fqNode; //local estimate of per-unit reactive flow along electrical link
        float _lambdaNode; //local estimate of lagrange multiplier for LinDistFlow

        float _fpNeighbor; //remote estimate of per-unit active flow along electrical link
        float _fqNeighbor; //remote estimate of per-unit reactive flow along electrical link
        float _lambdaNeighbor; //remote estimate of lagrange multiplier for LinDistFlow

        //Flags associated with remote vertex
        bool _nodeFlag;
        bool _neighborFlag;

        //link activation code (used to decide when a link should be activated, links with same activation code are activated simultaneously)
        bool _linkStatus;


        //Olaolu's addition buffer data
        float _buffer_fP[200];
        float _buffer_fQ[200];
        float _buffer_lambda[200];
};


struct node {
    uint8_t data;
    node *next;
    node *neighborNext;
    node *activeNext;
};


class LinkedList {
    public:
        // Constructor
        LinkedList();
        LinkedList(int n);
        //States
        inline void setLLsize (uint8_t j) {_size = j;}
        inline void resetLLsize () {_size = 0;}
        inline uint8_t getLLsize() { return _size; }
        inline void setNumActiveLinks (uint8_t j) {_numActiveLinks = j;}
        inline uint8_t getNumActiveLinks() { return _numActiveLinks; }
        // inline int getInheritorID() { return _inheritor; }

        //method to display linked list of online node IDs
        void displayLinkedList();
        //method to display Active linked lists
        void displayActiveLinkedList(ORemoteVertex *n);
        //method to see if a link is still available
        bool isLinkActive(uint8_t neighborID);
        //method to unlink the first node the linkedlist points to and return its data
        uint8_t unlinkLinkedListNodes();
        //method to update the linked list of online node IDs based on neighbor status
        void updateLinkedList(uint8_t *r);
        //resets the status of all neighbors from 3 to 2 
        void resetLinkedListStatus(uint8_t *r);
        //method to initialize node status for each neighbor
        void initializeNodeStatus(ORemoteVertex *n);
        //method to find an unActive link
        void resetActiveLinks(ORemoteVertex *n);
        //method to find an unActive link
        void updateActiveLinks(ORemoteVertex *n);
        //method to unlink a Active link
        void unlinkActiveLink(uint8_t neighborID);
        //method to find an unActive link
        uint8_t findInActiveLink(ORemoteVertex *n);

        float addActiveFlows(uint8_t i, ORemoteVertex *n);
        float addReactiveFlows(uint8_t i, ORemoteVertex *n);
        float addLambdas(uint8_t i, ORemoteVertex *n);


    private:
        //properties
        node *_head, *_neighborHead, *_activeHead, *_tail, *_neighborTail, *_activeTail;
        uint8_t _size;  //size of linked list
        uint8_t _numActiveLinks;  //number of active links

        // Helper functions
        void _prepareLinkedList(int n);
};


class OGraph_OPF {
	public:
        /// Constructors
		OGraph_OPF();
        OGraph_OPF(OLocalVertex * s);
        OGraph_OPF(OLocalVertex * s, LinkedList * l);
        
        /// Local vertex
        inline OLocalVertex * getLocalVertex() { return _self; }
        bool isLocalVertex(uint32_t aLsb);
        inline bool isLocalVertex(XBeeAddress64 a) { return isLocalVertex(a.getLsb()); }
        
        /// Graph properties
        inline uint8_t getN() { return _n; }
        inline uint8_t getNumberNonNeighbors() { return _n - _self->getInDegree() - 1; }
        
        /// In-neighbors
        // Add in-neighbor
        bool addInNeighbor(XBeeAddress64 , uint8_t neighborID);
        bool addInNeighbor(uint32_t aLsb, uint8_t neighborID);
        bool addInNeighbor(XBeeAddress64 a, uint8_t neighborID, float r, float x);
        bool addInNeighbor(uint32_t aLsb, uint8_t neighborID, float r, float x);
        //Remove in-neighbor
        bool removeInNeighbor(uint8_t neighborID);     //Olaolu
        // Determine if vertex is in-neighbor
        bool isInNeighbor(XBeeAddress64 a);
        bool isInNeighbor(uint32_t aLsb);
        bool isInNeighbor(XBeeAddress64 a, uint8_t &i);
        bool isInNeighbor(uint32_t aLsb, uint8_t &i);
        bool isInNeighbor(uint32_t aLsb, ORemoteVertex * &v);
        
        /// Non-neighbors
        // Add non-neighbor to array
        bool addNonNeighbor(XBeeAddress64 a, uint8_t neighborID);
        bool addNonNeighbor(uint32_t aLsb, uint8_t neighborID);
        bool addNonNeighbor(XBeeAddress64 a, uint8_t neighborID, float r, float x);
        bool addNonNeighbor(uint32_t aLsb, uint8_t neighborID, float r, float x);
        // Determine if vertex is non-neighbor
        bool isNonNeighbor(uint32_t aLsb);
        bool isNonNeighbor(XBeeAddress64 a);
        bool isNonNeighbor(uint32_t aLsb, uint8_t &i);
        bool isNonNeighbor(XBeeAddress64 a, uint8_t &i);
                        
        /// Common vertices
        // Methods to clear various states
        void clearRatioConsensusStates();

        // Methods to get pointer to vertex
        OVertex * getVertexByAddressLsb(uint32_t aLsb);
        OVertex * getVertexByAddressLsb(uint32_t aLsb, uint8_t &i);
        OVertex * getVertexByAddress(XBeeAddress64 a);
        OVertex * getVertexByUniqueID(uint8_t i);
        ORemoteVertex * getRemoteVertex(uint8_t neighborID);

        uint8_t _getRemoteVertexIndex(uint32_t aLsb);

        // LinkedList methods
        void configureLinkedList();
        inline LinkedList * getLinkedList() { return _list; }

	private:
        /// Properties
        uint8_t _n;                         // Total number of vertices

        OLocalVertex * _self;               // Local vertex
        ORemoteVertex _remoteVertices[NUM_REMOTE_VERTICES];
        // A linked list for IDs of online neghbors
        LinkedList * _list;
        // Methods
        uint8_t _getRemoteVertexIndex(XBeeAddress64 a);
    	//uint8_t _getRemoteVertexIndex(uint32_t aLsb);        made this function public (*Sammy)
        bool _isRemoteVertex(uint32_t aLsb);
        bool _isRemoteVertex(uint32_t aLsb, uint8_t &i);
        bool _addRemoteVertex(uint32_t aLsb, uint8_t neighborID, float r, float x, bool inNeighbor = false);
};


#endif // OGraph_OPF_h