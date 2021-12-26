int MOTOR1DIR1=4;
int MOTOR1DIR2=5;

int MOTOR2DIR1=6;
int MOTOR2DIR2=7;

int m1speedpin=12;
int m2speedpin=13;

int m1speed;
int m2speed;

void setup() {
  // put your setup code here, to run once:
pinMode(m1speedpin,OUTPUT);
pinMode(m2speedpin,OUTPUT);
pinMode(MOTOR1DIR1,OUTPUT);
pinMode(MOTOR1DIR2,OUTPUT);
pinMode(MOTOR2DIR1,OUTPUT);
pinMode(MOTOR2DIR2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
    digitalWrite(MOTOR1DIR1,HIGH);
    digitalWrite(MOTOR1DIR2,LOW);
    digitalWrite(MOTOR2DIR1,HIGH);
    digitalWrite(MOTOR2DIR2,LOW);


  }
