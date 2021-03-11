
int lt=6;   //light pin on relay
char data=0;
void setup()
{
 Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(lt,OUTPUT);
}

void loop()
{
 if(Serial.available()>0)
 {
 data=Serial.read();
 Serial.print(data);
 Serial.print("\n");
 if(data=='1')
 {
 digitalWrite(lt,LOW);
 }
 else if(data=='2')
 {
  digitalWrite(lt,HIGH);
 }
 
 }
}
 
 













  
