#include <Streaming.h>
//#include <Dyno.h>
#include <XBee.h>
#include <OGraph.h>
#include <OAgent.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 11

long base = 10000;  // not using floating points so need a base number

XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x415DB670,11,0,0,0,0,1,base);
LinkedList l = LinkedList();  //#NODE
OGraph g = OGraph(&s,&l);
//OAgent_LinkedList al = OAgent_LinkedList();  //#NODE
OAgent a = OAgent(&xbee,&rx,&g,false,true);

uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = true;

//AFE and controller variables
float f_error0;         // variable to store the read value 
float v_error0;         // variable to store the read value
float flow_flag0;         // variable to store the read value 
float q_level0;         // variable to store the read value 
float f_error1;         // ratio consensus result for average frequency error

float deltaQ;

float error = 0;
float u_f =0;
float u_v =0;
float u_set=0.85;

//Modbus Communication
MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB3 };
IPAddress ip(192, 168, 2, 3);
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
int count;
int pos;

float eps_f = 0.001;
float eps_v = 0.001;
float D = 1;

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
  //g.addInNeighbor(0x415786D3,10,0,0); // node 10
  //g.addInNeighbor(0x415DB670,11,0,0); // node 11
  
  //g.addInNeighbor(0x415786A9,12,0,0); // node 12
  //g.addInNeighbor(0x4157847B,13,0,0); // node 13
  //g.addInNeighbor(0x415DB664,14,0,0); // node 14
  
  //g.addInNeighbor(0x415DB673,15,0,0); // node 15
  //g.addInNeighbor(0x415DB684,19,0,0); // node 19
  //g.addInNeighbor(0x41516F0B,20,0,0); // node 20

  g.configureLinkedList();
  
  digitalWrite(cPin,LOW);
  digitalWrite(sPin,LOW);
  
 // initialize the ethernet device
//  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  Ethernet.begin(mac, ip);   // start etehrnet interface
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

      int node11_ip = 181; //part of ip address for node 9 on the HIL side
      Mb.Req(MB_FC_READ_REGISTERS,40083,4,0,node11_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip)
      Mb.MbmRun();
      int x =  Mb.MbData[0];
      int y  = Mb.MbData[1];

      
      Serial.print("x: ");
      Serial.println(float(x),4);
      Serial.print("y: ");
      Serial.println(float(y),4);
      delay(7000);
   
//      a.resync();
    }
    else{

      int node11_ip = 181; //part of ip address for node 9 on the HIL side
      Mb.Req(MB_FC_READ_REGISTERS,40083,4,0,node11_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip)
      Mb.MbmRun();
      int x =  Mb.MbData[0];
      int y  = Mb.MbData[1];

      
      Serial.print("x: ");
      Serial.println(float(x),4);
      Serial.print("y: ");
      Serial.println(float(y),4);
      delay(7000);
      
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
  int node11_ip = 71; //part of ip address for node 11 on the HIL side 
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,4,0,node11_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip)
  Mb.MbmRun();
  //Serial.println("Received Response");
}

void receiveTyphoonData()
{
  int node11_ip = 71; //part of ip address for node 11 on the HIL side 
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,8,0,node11_ip); //(MB_FC FC, word Ref, word Count, word Pos, int nodeip)
  Mb.MbmRun();
}
