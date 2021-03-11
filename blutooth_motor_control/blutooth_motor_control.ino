
int mf1 = 2;
int mr1 = 3;
int mf2= 4;
int mr2 = 5;

int r=9;
int b=10; 
int g=11;      
int w=12;

char data=0;


void setup() 
{
  
  pinMode(mf1, OUTPUT);
  pinMode(mr1, OUTPUT);
  pinMode(mf2, OUTPUT);
  pinMode(mr2, OUTPUT);
  
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(w, OUTPUT);

  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available()>0)
  {
    data=Serial.read();
    Serial.print(data);
    Serial.print("\n") ;
     if(data=='1')
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
   if(data=='2')
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

    if(data=='3')
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
    if(data=='4')
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
      if(data=='5')
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
}
}
