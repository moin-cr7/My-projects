#include <IRremote.h>
int m1=7;
int m2=8;
int RECV_PIN = 3;               //declared for receiving pulses
int r=10;
int g=9;             // declared if you want to control with a single button
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()

{
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
 pinMode(r, OUTPUT);
   pinMode(g, OUTPUT);
   Serial.begin(9600);
  irrecv.enableIRIn(); 
}

void loop() {
   if (irrecv.decode(&results))
  {
    Serial.println(results.value);
    delay(10);
  if(results.value==2160032644)
    {
    digitalWrite(m1,HIGH);               //STOP 
    digitalWrite(m2,HIGH);
    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);
    }
    
    
      if(results.value==2160065284)
    {
    digitalWrite(m1,LOW);                 //FORWARD
    digitalWrite(m2,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(r,LOW);
    }
    if(results.value==2160061204)
    {
    digitalWrite(m1,LOW);                  //LEFT
    digitalWrite(m2,HIGH);
    }
       if(results.value==2160008164)
    {
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);                    //RIGHT
    
    }
   
    irrecv.resume();
  }
}
