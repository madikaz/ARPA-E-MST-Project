#include <Streaming.h>
//#include <Dyno.h>
#include <XBee.h>
#include <OGraph_ED.h>
#include <OAgent_ED.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 13 (node id = 5)

long base = 10000;  // not using floating points so need a base number

XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x4157847B,5,0,0.9,0.15,2.7,2,10);
LinkedList l = LinkedList();  //#NODE
OGraph_ED g = OGraph_ED(&s,&l);
OAgent_ED a = OAgent_ED(&xbee,&rx,&g,false,true);

uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//ED variables
float ED;
float alpha = 0.15;
float beta = 2.7;
float DER_max_cap = 0.9;
float DER_min_cap = 0;
float u = 0;

//Modbus Communication
MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xBD };
IPAddress ip(192, 168, 2, 13);
IPAddress gateway(192, 168, 2, 20);
IPAddress subnet(255, 255,255, 0);

uint16_t state_high;
uint16_t state_low;
uint8_t Ref_high;
uint8_t Ref_low;
uint8_t Count_high;
uint8_t Count_low;
uint8_t Pos_high;
uint8_t Pos_low;
int fc;
int ref;
int count=0;
int pos;
int16_t load[151]={6100,6147,6115,6078,6069,6057,6034,5997,6019,6012,6028,5991,6042,6088,6062,6037,6082,6070,6124,6126,6096,6120,6100,6130,6187,6226,6224,6270,6274,6236,6206,6232,6226,6228,6261,6301,6295,6333,6363,6366,6385,6369,6424,6462,6486,6535,6530,6545,6567,6545,6560,6522,6578,6568,6543,6530,6548,6567,6612,6585,6588,6639,6620,6657,6706,6720,6708,6731,6713,6770,6774,6773,6821,6874,6933,6902,6910,6965,7022,7006,6971,6987,6948,6973,6933,6926,6952,7003,7054,7091,7150,7146,7188,7192,7231,7242,7206,7262,7241,7216,7188,7219,7240,7201,7162,7153,7139,7132,7151,7198,7239,7251,7307,7286,7274,7321,7371,7412,7404,7384,7436,7457,7494,7495,7539,7577,7569,7564,7527,7495,7538,7551,7598,7572,7559,7593,7606,7583,7633,7625,7591,7572,7596,7560,7618,7650,7668,7711,7718,7747,7765};
unsigned long myTime = 0;
uint16_t num_iters=1000;
float step_size = 0.003;

void setup()  {
  Serial.begin(38400);
  Serial3.begin(38400);
  pinMode(cPin, OUTPUT);
  pinMode(sPin, OUTPUT);
  digitalWrite(cPin,HIGH);
  digitalWrite(sPin,HIGH);
  
  xbee.setSerial(Serial3); //Specify the serial port for xbee
//Define the Neighboring nodes
  //g.addInNeighbor(0x4174F1AA,1,0,0); // node 1
  //g.addInNeighbor(0x4174F186,2,0,0); // node 2
  //g.addInNeighbor(0x4151C692,3,0,0); // node 3
  //g.addInNeighbor(0x4151C48B,4,0,0); // node 4
  //g.addInNeighbor(0x4151C688,5,0,0); // node 5
  //g.addInNeighbor(0x4151C6AB,6,0,0); // node 6
  //g.addInNeighbor(0x4151C6CB,7,0,0); // node 7
  //g.addInNeighbor(0x4151C6AC,8,0,0); // node 8
  //g.addInNeighbor(0x415786E1,9,0,0); // node 9
//  g.addInNeighbor(0x415786D3,2,0,0); // node 10
  g.addInNeighbor(0x415DB670,3,0,0); // node 11
//  g.addInNeighbor(0x415786A9,4,0,0); // node 12
  //g.addInNeighbor(0x4157847B,13,0,0); // node 13
//  g.addInNeighbor(0x415DB664,6,0,0); // node 14
  //g.addInNeighbor(0x415DB673,15,0,0); // node 15
  //g.addInNeighbor(0x415DB684,19,0,0); // node 19
  //g.addInNeighbor(0x41516F0B,20,0,0); // node 20

  g.configureLinkedList();
  
  digitalWrite(cPin,LOW);
  digitalWrite(sPin,LOW);
  
 // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  for (int i=0;i<12;i++) {
     Mb.MbData[i] = 0;
  }
}

void loop() {
  if(de == false) 
  {
    if(!(a.isLeader()))
    {
      Serial.println("Still trying to sync");
      if(a.sync()) 
      {
        Serial.println("Communication Link established");
        Serial.println("c");
        digitalWrite(sPin,HIGH);
        de = true;
      }
      else
      {
        de  = false; //means could not sync 
      }
    }
    if (a.isLeader())
    {
      Serial.println("Send letter s(r) to sync(resync)"); //let computer know you want to sync
      while (Serial.available() == 0) 
      { 
        //simply makes the arduino wait until commputer sends signal        
      }
      if(Serial.available()) 
      {
        Serial.println("got some letter");
        uint8_t b = Serial.read(); //enter the character 's'
        Serial.println(b);
        if (b == 'r')
          {
            a.setLeader(0);
          }
        if ((b == 's')||(b == 'r'))
        {
          Serial.println("got the s and about to sync");
          de = true;
          if(a.sync()) {
            Serial.println("Communication Link established");
            Serial.println("c");
            digitalWrite(sPin,HIGH);
            //ce = true;
          }
          else
          {
            de  = false; //means could not sync 
          } 
        }
      }
    }
  }
  
  else 
  {
    if(a.isSynced())
    {
      if (a.isLeader())
      {
        Serial.println("Begin economic dispatch? (y/n)"); //let computer know you want to begin economic dispatch
        while (Serial.available() == 0) 
        { 
          //simply makes the arduino wait until commputer sends signal        
        }
        if(Serial.available()) 
        {
          Serial.println("got some letter");
          uint8_t o = Serial.read(); //enter the character 's'
          Serial.println(o);
          if (o == 'y')
          {
              //          u = float(load[0])/10000.0;Serial.println("load");Serial.println(u,4);
            s.setActiveDemand(load); s.setDERparams(DER_min_cap,DER_max_cap,alpha,beta);
            Serial.println("Starting Economic Dispatch");
            a.EconomicDispatch(true,step_size,num_iters);           
          }
        }
      }
      if (!(a.isLeader()))
      {
        if (count==0){
          //          u = float(load[0])/10000.0;Serial.println("load");Serial.println(u,4);
          s.setActiveDemand(load); s.setDERparams(DER_min_cap,DER_max_cap,alpha,beta);
          Serial.println("Starting Economic Dispatch");
          a.EconomicDispatch(true,step_size,num_iters);

//          u = float(load[75])/10000.0;Serial.println("load");Serial.println(u,4);
//          ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//          Serial.println("ED result");
//          Serial.println(ED,6);
//
//          u = float(load[150])/10000.0;Serial.println("load");Serial.println(u,4);
//          ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//          Serial.println("ED result");
//          Serial.println(ED,6);
        }
        count++;
//        u = float(load[75])/1000.0;Serial.println("load");Serial.println(u,4);
//        ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//        Serial.println("ED result");
//        Serial.println(ED,4);
//        
//        u = float(load[150])/1000.0;Serial.println("load");Serial.println(u,4);
//        ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//        Serial.println("ED result");
//        Serial.println(ED,4);
      }
      a.resync();
    }
  }
}

void sendConsensusResults()
{
  //VARIABLES NOT BEING USED////////////////////////////////////
  fc = 16;                                 //function code to write to multiple registers
  ref = 0;                                 //starting address of register at server end (Typhoon) which we are writing to in this case
  Ref_high = uint8_t(ref >> 8 && 0x00FF);
  Ref_low = uint8_t(ref & 0x0FF);
  count = 2;                              //in this case we want to write to 2 registers on the server(typhoon)
  Count_high = uint8_t(count >> 8 && 0x00FF);
  Count_low = uint8_t(count & 0x0FF);
  pos = 0;                              //position of the registers on the client(arduino) we want to read
  Pos_high = uint8_t(pos >> 8 && 0x00FF);
  Pos_low = uint8_t(pos & 0x0FF); 
  //Mb.Build(fc,Ref_high,Ref_low,Count_high,Count_low,Pos_high,Pos_low);
  //Serial.println("Sent Request Packet");
  ////////////////////////////////////////////////////////////////
  int node5_ip = 65; //part of ip address for node 5 on the HIL side                                                                                                               //change3
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,4,0,node5_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip)                                              //change1
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
}

void receiveTyphoonData()
{
  int node5_ip = 65; //part of ip address for node 5 on the HIL side                                                                                                                //change3
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,4,0,node5_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip)                                                     //change1
  Mb.MbmRun();
}
