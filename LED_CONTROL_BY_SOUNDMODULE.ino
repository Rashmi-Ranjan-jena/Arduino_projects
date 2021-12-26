int soundpin=A0;
int ledpin=8;
int soundval;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(soundpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
soundval=analogRead(soundpin);
Serial.println(soundval);
if(soundval<=80){
  digitalWrite(ledpin,LOW);
}
if(soundval>=81){
  digitalWrite(ledpin,HIGH);
}
}
