#include <IRremote.h>

/* define IR sensor pin */
int IRsensorPin = 12;

/* define the some functions used by the library */
IRrecv irrecv(IRsensorPin);
decode_results results;

/* define L298N motor drive control pins */
int RightMotorForward = 2;    // IN1
int RightMotorBackward = 3;   // IN2
int LeftMotorForward = 4;     // IN3
int LeftMotorBackward = 5;    // IN4
int LeftLED = 6;
int RightLED = 7;

void setup(){
  
  /* initialize motor control pins as output */
  pinMode(LeftMotorForward,OUTPUT);
  pinMode(RightMotorForward,OUTPUT);
  pinMode(LeftMotorBackward,OUTPUT);
  pinMode(RightMotorBackward,OUTPUT);
  pinMode(LeftLED,OUTPUT);
  pinMode(RightLED,OUTPUT);

  /* start serial communication to see hex codes */
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop(){
  
  /* if the sensor is receive any signal */
  if (irrecv.decode(&results)){
    
    /* print the hex code value on the serial monitor */
    Serial.println(results.value);
    delay(5);

    /* resume function according to hex code */
    irrecv.resume();
  }
 
  if(results.value == 752) MotorForward();
  if(results.value == 2800) MotorBackward();
  if(results.value == 3280) TurnRight();
  if(results.value == 720) TurnLeft();
  if(results.value == 2672) MotorStop();
  
}

/* FORWARD */
void MotorForward(){
  digitalWrite(LeftLED,LOW);
  digitalWrite(RightLED,LOW);
  digitalWrite(LeftMotorForward,HIGH);
  digitalWrite(RightMotorForward,HIGH);
  digitalWrite(LeftMotorBackward,LOW);
  digitalWrite(RightMotorBackward,LOW); 
}

/* BACKWARD */
void MotorBackward(){
  digitalWrite(LeftLED,LOW);
  digitalWrite(RightLED,LOW);
  digitalWrite(LeftMotorBackward,HIGH);
  digitalWrite(RightMotorBackward,HIGH);
  digitalWrite(LeftMotorForward,LOW);
  digitalWrite(RightMotorForward,LOW);
}

/* TURN RIGHT */
void TurnRight(){
  digitalWrite(LeftLED,LOW);
  digitalWrite(LeftMotorForward,HIGH); 
  digitalWrite(RightMotorForward,LOW);
  digitalWrite(LeftMotorBackward,LOW);
  digitalWrite(RightMotorBackward,HIGH);
  digitalWrite(RightLED,HIGH);
}

/* TURN LEFT */
void TurnLeft(){
  digitalWrite(RightLED,LOW);
  digitalWrite(RightMotorForward,HIGH);  
  digitalWrite(LeftMotorForward,LOW);
  digitalWrite(LeftMotorBackward,HIGH);
  digitalWrite(RightMotorBackward,LOW);
  digitalWrite(LeftLED,HIGH);
}

/* STOP */
void MotorStop(){
  digitalWrite(LeftLED,LOW);
  digitalWrite(RightLED,LOW);
  digitalWrite(LeftMotorBackward,LOW);
  digitalWrite(RightMotorBackward,LOW);
  digitalWrite(LeftMotorForward,LOW);
  digitalWrite(RightMotorForward,LOW);
}
