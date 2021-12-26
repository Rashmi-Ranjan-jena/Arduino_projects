#include<Servo.h>
int servopin=8;
float servopos;
Servo myservo;

int xpin=A1;
int xval;
void setup() {
  // put your setup code here, to run once:
myservo.attach(servopin);
pinMode(xpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
xval=analogRead(xpin);
servopos=(180./1023.)*xval;
myservo.write(servopos);
}
