int redled=8;
int blueled=10;
int greenled=9;
float blinkval;
int potentiameter=A1;
int potval;
void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(blueled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(potentiameter,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval=analogRead(potentiameter);
blinkval=(5./1023.)*potval;
Serial.println(blinkval);
if(blinkval>4){
digitalWrite(redled,HIGH);
digitalWrite(blueled,HIGH);
digitalWrite(greenled,HIGH);
}

if(blinkval<=4){
digitalWrite(redled,LOW);
digitalWrite(blueled,LOW);
digitalWrite(greenled,LOW);
}

}
