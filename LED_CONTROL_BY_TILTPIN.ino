int tiltpin=7;
int tiltval;
int ledpin=13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(tiltpin,INPUT);
digitalWrite(tiltpin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltval=digitalRead(tiltpin);
Serial.println(tiltval);
if(tiltval==0){
  digitalWrite(ledpin,HIGH);
}
if(tiltval==1){
  digitalWrite(ledpin,LOW);
}
}
