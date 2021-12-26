// ---------------------------------------------------------------- //
// Arduino Ultrasoninc Sensor HC-SR04
// Re-writed by Arbi Abdul Jabbaar
// Using Arduino IDE 1.8.7
// Using HC-SR04 Module
// Tested on 17 September 2019
// ---------------------------------------------------------------- //
#include<Servo.h>
int servopin=9;
Servo myservo;
#define echoPin 11 // attach pin D9 Arduino to pin Echo of HC-SR04
#define trigPin 12 //attach pin D10 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
//  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
//  Serial.println("with Arduino UNO R3");
  myservo.attach(servopin);
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.println(duration);
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance<10){
    myservo.write(0);
  }
  else if (distance>=10){
    myservo.write(180);
  }
}