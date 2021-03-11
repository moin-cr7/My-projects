#include<IRremote.h>
int mf1 = 2;
int mr1 = 3;
int mf2= 4;
int mr2 = 5;

int r=9;
int b=10; 
int g=11;      
int w=12;

int ir=6;
IRrecv irrecv(ir);
decode_results results;


void setup() {
  // put your setup code here, to run once:
  pinMode(mf1, OUTPUT);
  pinMode(mr1, OUTPUT);
  pinMode(mf2, OUTPUT);
  pinMode(mr2, OUTPUT);
  
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(w, OUTPUT);

  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() 
{
  if (irrecv.decode(&results))
  {
    Serial.println(results.value);
    delay(10);
     if(results.value==2160030604)
   {

  digitalWrite(mf1, LOW);
  digitalWrite(mr1, LOW);
  digitalWrite(mf2, LOW);          //STOP
  digitalWrite(mr2, LOW);
  digitalWrite(g,LOW);
  digitalWrite(r,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(w,LOW);
  }
   if(results.value==2160065284)
   {

  digitalWrite(mf1, HIGH);
  digitalWrite(mr1, LOW);
  digitalWrite(mf2, HIGH);          //FORWARD
  digitalWrite(mr2, LOW);
  digitalWrite(g,HIGH);
  digitalWrite(r,LOW);
  digitalWrite(b,LOW);
  digitalWrite(w,LOW);
  }

    if(results.value==2160032644)
   {

  digitalWrite(mf1, LOW);
  digitalWrite(mr1, HIGH);
  digitalWrite(mf2, LOW);
  digitalWrite(mr2, HIGH);             //BACK
  digitalWrite(g,LOW);
  digitalWrite(r,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(w,HIGH);
  }
    if(results.value==2160061204)
   {

  digitalWrite(mf1, LOW);
  digitalWrite(mr1, HIGH);            //LEFT
  digitalWrite(mf2, HIGH);
  digitalWrite(mr2, LOW);
  digitalWrite(g,LOW);
  digitalWrite(r,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(w,LOW);
  }
      if(results.value==2160008164)
   {

  digitalWrite(mf1, HIGH);
  digitalWrite(mr1, LOW);
  digitalWrite(mf2, LOW);
  digitalWrite(mr2, HIGH);         //RIGHT
  digitalWrite(g,LOW);
  digitalWrite(r,LOW);
  digitalWrite(b,LOW);
  digitalWrite(w,HIGH);
  }
  irrecv.resume();
}
}
