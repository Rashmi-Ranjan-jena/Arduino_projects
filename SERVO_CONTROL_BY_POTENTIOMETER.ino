#include<Servo.h>
int servopin=8;
float servopos;
Servo myservo;
int potpin=A1;
int potval;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
myservo.attach(servopin);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
servopos=(180./1023.)*potval;
Serial.println(potval);
delay(1000);
Serial.println(servopos);
myservo.write(servopos);
}
