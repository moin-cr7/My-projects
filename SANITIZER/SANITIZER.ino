#include <Servo.h>
Servo servo;
int ser=9;
int ir=3;
int led=13;
int value=0;
int i=0;
void setup() {
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
servo.attach(ser);
Serial.begin(9600);

}

void loop() {
  value=digitalRead(ir);
  Serial.println(value);
  if(value==false){
  digitalWrite(led,HIGH);
  servo.write(90);
  delay(500);
  servo.write(0);
  delay(500);
   
  
   /*for(i=0;i<=90;i+=15)
   {
   servo.write(i);
   delay(30);
    }
    for(i=90;i>0;i-=15)
   {
   servo.write(i);
   delay(30);
   break;
    }*/
   }
 else if(value==true)
 {
  digitalWrite(led,LOW);
  servo.write(0);
  
  }
}
