int buzzpin=8;
int potpin=9;
int buzzval;
float tunetime;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buzzval=analogRead(buzzpin);
tunetime=(9940./1023.)*buzzval+60;
digitalWrite(buzzpin,HIGH);
delay(tunetime);
digitalWrite(buzzpin,LOW);
delay(tunetime);
}
