#include<Servo.h>
int servopin=8;
int brightpin=9;
int brightval;
int servopos;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
pinMode(brightpin,INPUT);
myservo.attach(servopin);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
brightval=digitalRead(brightpin);
Serial.println(brightval);
if(brightval==1){
  servopos=0;
}
if(brightval==0){
  servopos=180;
}
myservo.write(servopos);

}
