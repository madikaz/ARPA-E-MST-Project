#include <Streaming.h>
//#include <Dyno.h>
#include <XBee.h>
#include <OGraph_ED.h>
#include <OAgent_ED.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 12 (node id = 4)

long base = 10000;  // not using floating points so need a base number

XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();

//Modbus Communication
MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xBC };
IPAddress ip(192, 168, 2, 12);
IPAddress gateway(192, 168, 2, 20);
IPAddress subnet(255, 255,255, 0);
uint8_t node_ip = 72;

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x415786A9,4,0,5,0.13,3.3,3,10);
LinkedList l = LinkedList();  //#NODE
OGraph_ED g = OGraph_ED(&s,&l);
OAgent_ED a = OAgent_ED(&xbee,&rx,&Mb,&g,false,true);

uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//ED variables
float ED;
float alpha = 0.13;
float beta = 3.3;
float DER_max_cap = 5;
float DER_min_cap = 0;
float u = 0;

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
//int16_t load[151]={7500,7461,7511,7473,7501,7556,7603,7595,7609,7609,7606,7625,7653,7636,7630,7600,7611,7645,7679,7665,7708,7746,7755,7726,7783,7830,7804,7839,7868,7874,7929,7896,7866,7876,7890,7927,7890,7901,7920,7943,7904,7891,7906,7897,7881,7846,7861,7823,7823,7798,7800,7852,7880,7902,7937,7899,7952,7936,7925,7926,7928,7895,7945,7984,8009,8010,8046,8064,8034,8009,8065,8096,8097,8137,8154,8188,8163,8163,8125,8181,8233,8209,8232,8259,8292,8301,8266,8311,8338,8349,8375,8429,8411,8434,8409,8420,8405,8461,8424,8470,8487,8544,8508,8485,8528,8551,8581,8639,8695,8688,8709,8736,8774,8821,8823,8881,8896,8955,8950,8987,8956,8935,8986,8967,8928,8905,8953,9002,8971,8933,8908,8874,8882,8859,8853,8820,8844,8865,8874,8882,8904,8912,8883,8860,8840,8885,8932,8902,8908,8920,8971};
//int16_t load[51]={7500,7461,7511,7473,7501,7556,7603,7595,7609,7609,7606,7625,7653,7636,7630,7600,7611,7645,7679,7665,7708,7746,7755,7726,7783,7830,7804,7839,7868,7874,7929,7896,7866,7876,7890,7927,7890,7901,7920,7943,7904,7891,7906,7897,7881,7846,7861,7823,7823,7798,7800};
//int16_t load[5]={7500,7461,7511,7473,7501};

unsigned long myTime = 0;
uint16_t num_iters=1000;
float step_size = 0.02;

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
  g.addInNeighbor(0x415786D3,2,0,0); // node 10
  g.addInNeighbor(0x415DB670,3,0,0); // node 11
  //g.addInNeighbor(0x415786A9,12,0,0); // node 12
//  g.addInNeighbor(0x4157847B,5,0,0); // node 13
  //g.addInNeighbor(0x415DB664,14,0,0); // node 14
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
  if (de == false)
  {
    if (!(a.isLeader()))
    {
      Serial.println("Still trying to sync");
      if (a.sync())
      {
        Serial.println("Communication Link established");
        Serial.println("c");
        digitalWrite(sPin, HIGH);
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
      if (Serial.available())
      {
        Serial.println("got some letter");
        uint8_t b = Serial.read(); //enter the character 's'
        Serial.println(b);
        if (b == 'r')
        {
          a.setLeader(0);
        }
        if ((b == 's') || (b == 'r'))
        {
          Serial.println("got the s and about to sync");
          de = true;
          if (a.sync()) {
            Serial.println("Communication Link established");
            Serial.println("c");
            digitalWrite(sPin, HIGH);
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
    if (a.isSynced())
    {
      if (a.isLeader())
      {

//          s.setActiveDemand(load); 
          s.setDERparams(DER_min_cap, DER_max_cap, alpha, beta);
          Serial.println("Starting Economic Dispatch");
          a.EconomicDispatch(node_ip, step_size, num_iters);
      }
      if (!(a.isLeader()))
      {
        //          s.setActiveDemand(load); 
          s.setDERparams(DER_min_cap, DER_max_cap, alpha, beta);
          Serial.println("Starting Economic Dispatch");
          a.EconomicDispatch(node_ip, step_size, num_iters);
      }
    }
  }
}
