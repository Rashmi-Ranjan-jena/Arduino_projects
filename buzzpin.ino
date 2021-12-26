int buzzpin=8;
int potpin=9;
int potval;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
Serial.println(potval);
if(potval<400){
  digitalWrite(buzzpin,LOW);
}
if(potval>=400){
  digitalWrite(buzzpin,HIGH);
}
}
