#include <IRremote.h>
int m1=7;
int m2=8;
int RECV_PIN = 3;               //declared for receiving pulses
int c=10;                        // declared if you want to control with a single button
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()

{
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
 pinMode(c, OUTPUT);
   Serial.begin(9600);
  irrecv.enableIRIn(); 
}

void loop() {
   if (irrecv.decode(&results))
  {
    Serial.println(results.value);
    delay(10);
  if(results.value==2160019894)
    {
    digitalWrite(m1,HIGH);
    digitalWrite(c,HIGH);
    }
      if(results.value==2160015814)
    {
    digitalWrite(m1,LOW);
    digitalWrite(c,LOW);
    }
    irrecv.resume();
  }
}
    /*

digitalWrite(a,HIGH);
delay(5000);

digitalWrite(a,LOW);
delay(5000);*/







                     
