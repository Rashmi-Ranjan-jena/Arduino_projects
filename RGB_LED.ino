int redpin=5;
int greenpin=6;
int bluepin=7;
void setup() {
  // put your setup code here, to run once:
pinMode(redpin,OUTPUT);
pinMode(greenpin,OUTPUT);
pinMode(bluepin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redpin,HIGH);
digitalWrite(greenpin,LOW);
digitalWrite(bluepin,LOW);

delay(1000);

digitalWrite(redpin,LOW);
digitalWrite(greenpin,HIGH);
digitalWrite(bluepin,LOW);

delay(1000);

digitalWrite(redpin,LOW);
digitalWrite(greenpin,LOW);
digitalWrite(bluepin,HIGH);

delay(1000);

digitalWrite(redpin,HIGH);
digitalWrite(greenpin,HIGH);
digitalWrite(bluepin,LOW);

delay(1000);

digitalWrite(redpin,HIGH);
digitalWrite(greenpin,LOW);
digitalWrite(bluepin,HIGH);

delay(1000);

digitalWrite(redpin,LOW);
digitalWrite(greenpin,HIGH);
digitalWrite(bluepin,HIGH);

delay(1000);
}
