int t=80;
int i=0;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(t);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(t);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(t);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(t);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(t);



digitalWrite(2,HIGH);
digitalWrite(5,HIGH);
digitalWrite(8,HIGH);
digitalWrite(3,LOW);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
delay(t);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
digitalWrite(8,LOW);
digitalWrite(3,HIGH);
digitalWrite(6,HIGH);
digitalWrite(9,HIGH);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
delay(t);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
digitalWrite(8,LOW);
digitalWrite(3,LOW);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(10,HIGH);
delay(t);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
digitalWrite(8,LOW);
digitalWrite(3,HIGH);
digitalWrite(6,HIGH);
digitalWrite(9,HIGH);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
delay(t);
digitalWrite(2,HIGH);
digitalWrite(5,HIGH);
digitalWrite(8,HIGH);
digitalWrite(3,LOW);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
delay(t);



while(i<=10)
{
  if(i<10)
  {
digitalWrite(3,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(4,LOW);
digitalWrite(2,LOW);
digitalWrite(10,HIGH);
delay(300);
digitalWrite(3,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(4,LOW);
digitalWrite(2,LOW);
digitalWrite(10,LOW);
delay(300);
  }

if(i>10)
{
break;
}
i++;
Serial.println(i);
}
if(i==11)
{
 i=0;
  }



}
