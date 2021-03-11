#define ech 11
#define tri 10
//#define led 11

long duration;
long distance;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ech,INPUT);
pinMode(tri,OUTPUT);
//pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(tri,LOW);
delayMicroseconds(2);

digitalWrite(tri,HIGH);
delayMicroseconds(10);

digitalWrite(tri,LOW);

duration = pulseIn(ech,HIGH);
distance = duration/58.2;

Serial.println(distance);
delay(50);
/*if(distance<=10){
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}*/
}
