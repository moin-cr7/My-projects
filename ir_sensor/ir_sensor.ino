int value=0; 
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);

}

void loop() 
{
  value=digitalRead(3);
   Serial.println(value); 
  if(digitalRead(3)==true)
  {
   digitalWrite(13,HIGH);
  
   delay(10);
    }
    else
    {
     digitalWrite(13,LOW);
     delay(10);
      }

}
