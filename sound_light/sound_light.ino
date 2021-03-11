/*
 * Mantas Utka 
*/

int l1= 2; //Adding the LED's and sensor.
int l2= 3;
int l3= 4;
int l4= 5;
int l5= 6;
int l6= 7;
int l7= 8;
int l8= 9;
int l9= 10;
int sensorPin= A0; //The sensor selecting as Analog pin. The Analog Pin is better for projects as this one.
int val = 0;

void setup(){
  pinMode(l1, OUTPUT); //Selecting LEDs as outputs to push the results in LEDs of sound detector
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(l7, OUTPUT);
  pinMode(l8, OUTPUT);
  pinMode(l9, OUTPUT);
  pinMode(sensorPin, INPUT); //Selecting the sensor as input to send results into Arduino
  Serial.begin (9600);
}
  
void loop (){
  val =analogRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal, LED flashes
  
  //1
  if (val >= 500) {
    digitalWrite(l3, HIGH); //selecting the values of LEDs to flash by detecting values of sound sensor.
  }
  else {
    digitalWrite(l3, LOW);
  }

  //2
   if (val >= 600) {
    digitalWrite(l2, HIGH);
  }
  else {
    digitalWrite(l2, LOW);
  }

   //3
   if (val >= 670) {
    digitalWrite(l1, HIGH);
  }
  else {
    digitalWrite(l1, LOW);
  }

  //4
  if (val >= 700) {
    digitalWrite(l4, HIGH);
  }
  else {
    digitalWrite(l4, LOW);
  }

  //5
  if (val >= 720) {
    digitalWrite(l7, HIGH);
  }
  else {
    digitalWrite(l7, LOW);
  }

  //6
  if (val >= 750) {
    digitalWrite(l8, HIGH);
  }
  else {
    digitalWrite(l8, LOW);
  }

  //7
  if (val >= 770) {
    digitalWrite(l9, HIGH);
  }
  else {
    digitalWrite(l9, LOW);
  }

  //8
  if (val >= 780) {
    digitalWrite(l6, HIGH);
  }
  else {
    digitalWrite(l6, LOW);
  }
    //9                               
  if (val >= 790) {
    digitalWrite(l5, HIGH);
  }
  else {
    digitalWrite(l5, LOW);
  }
}
