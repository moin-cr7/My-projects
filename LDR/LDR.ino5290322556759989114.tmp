#define ldr 8
#define led 7

void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(ldr)==1)
  {
digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  Serial.println(digitalRead(ldr));
  delay(100);

}
