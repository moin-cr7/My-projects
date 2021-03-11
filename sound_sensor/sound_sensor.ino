const int led=11;
const int snd=A2;
const int thr=200;


void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);
 pinMode(snd,INPUT);

}

void loop() {
  int soundsens=analogRead(snd);
  if(soundsens>=thr){
    digitalWrite(led,HIGH);
  delay(1000);
  }
  else
  {
    digitalWrite(led,LOW);
  }

}
