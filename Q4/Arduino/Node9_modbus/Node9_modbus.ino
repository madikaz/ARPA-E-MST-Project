#include <Streaming.h>
#include <XBee.h>
//#include <Dyno.h>
#include <OGraph_ED.h>
#include <OAgent_ED.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>

//Node 9 (node id = 1)

long base = 10000;  // use base to increase precision of results

XBee xbee = XBee();
ZBRxResponse rx = ZBRxResponse();

//Modbus Communication
MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB9 };
IPAddress ip(192, 168, 2, 9); // What are these addresses
IPAddress gateway(192, 168, 2, 20);
IPAddress subnet(255, 255, 255, 0);
uint8_t node_ip = 69;

// address, ID, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x415786E1, 1, 0, 10, 0.1, 2, 4, 10);
LinkedList l = LinkedList();  //#NODE
OGraph_ED g = OGraph_ED(&s, &l);
OAgent_ED a = OAgent_ED(&xbee, &rx, &Mb, &g, true, true); // argument rx?

uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//ED variables
float ED;
float alpha = 0.1;
float beta = 2;
float DER_max_cap = 10;
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
int count = 0;
int pos;
//int16_t load[151] = {4137, 4144, 4276, 4457, 4702, 5043, 5319, 5594, 5966, 6256, 6611, 6916, 7202, 7515, 7792, 8027, 8254, 8404, 8552, 8645, 8751, 8779, 8826, 8827, 8775, 8611, 8508, 8436, 8307, 8188, 8055, 7911, 7751, 7606, 7459, 7401, 7300, 7177, 7063, 6901, 6759, 6606, 6514, 6355, 6265, 6145, 6048, 5924, 5879, 5711, 5521, 5369, 5183, 4991, 4857, 4733, 4544, 4298, 4088, 3825, 3575, 3328, 3142, 2892, 2647, 2458, 2335, 2212, 2077, 1967, 1871, 1813, 1714, 1625, 1518, 1388, 1208, 1051, 799, 548, 248, 37, -124, -402, -686, -999, -1275, -1564, -1892, -2263, -2593, -2941, -3176, -3345, -3599, -3811, -3925, -4083, -4262, -4453, -4568, -4722, -4715, -4742, -4704, -4693, -4645, -4671, -4703, -4718, -4673, -4708, -4655, -4683, -4694, -4659, -4606, -4593, -4500, -4419, -4361, -4220, -4083, -3942, -3756, -3537, -3401, -3235, -3039, -2833, -2662, -2474, -2336, -2153, -1999, -1790, -1635, -1472, -1248, -1107, -971, -778, -614, -422, -272, -109, 119, 273, 398, 480, 603};
//int16_t load[51] = {4137, 4144, 4276, 4457, 4702, 5043, 5319, 5594, 5966, 6256, 6611, 6916, 7202, 7515, 7792, 8027, 8254, 8404, 8552, 8645, 8751, 8779, 8826, 8827, 8775, 8611, 8508, 8436, 8307, 8188, 8055, 7911, 7751, 7606, 7459, 7401, 7300, 7177, 7063, 6901, 6759, 6606, 6514, 6355, 6265, 6145, 6048, 5924, 5879, 5711, 5521};
//int16_t load[5] = {4137, 4144, 4276, 4457, 4702};
unsigned long myTime = 0;

void setup()  {
  Serial.begin(38400);
  Serial3.begin(38400);
  pinMode(cPin, OUTPUT);
  pinMode(sPin, OUTPUT);
  digitalWrite(cPin, HIGH);
  digitalWrite(sPin, HIGH);

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
  //g.addInNeighbor(0x415786E1,1,0,0); // node 9
//  g.addInNeighbor(0x415786D3, 2, 0, 0); // node 10
    g.addInNeighbor(0x415DB670, 3, 0, 0); // node 11
//  g.addInNeighbor(0x415786A9,12,0,0); // node 12
    g.addInNeighbor(0x4151C692,4,0,0); // node 3 as node 12
    g.addInNeighbor(0x415DB664,6,0,0); // node 14
  //g.addInNeighbor(0x415DB673,15,0,0); // node 15
  //g.addInNeighbor(0x415DB684,19,0,0); // node 19
  //g.addInNeighbor(0x41516F0B,20,0,0); // node 20

  g.configureLinkedList();

  digitalWrite(cPin, LOW);
  digitalWrite(sPin, LOW);

  // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  for (int i = 0; i < 12; i++) {
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
          a.EconomicDispatch(node_ip);
      }
      if (!(a.isLeader()))
      {
        //          s.setActiveDemand(load); 
          s.setDERparams(DER_min_cap, DER_max_cap, alpha, beta);
          Serial.println("Starting Economic Dispatch");
          a.EconomicDispatch(node_ip);
      }
    }
  }
}
