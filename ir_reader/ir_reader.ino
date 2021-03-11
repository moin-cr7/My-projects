#include <IRremote.h>
 
int RECV_PIN = 3;               //declared for receiving pulses
int c=10;                        // declared if you want to control with a single button
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup()
{
  pinMode(c, OUTPUT);
   Serial.begin(9600);
  irrecv.enableIRIn();                      // Start the receiver
}

void loop() {
  if (irrecv.decode(&results))
  {
    Serial.println(results.value);
    delay(10);
    if(results.value==2160016324)
    {
     digitalWrite(c,HIGH);
    }
     else if(results.value==2160015814)
     {
          digitalWrite(c,LOW);
     }
     
      irrecv.resume();                        // Receive the next value
  }
  
  }
