int brightpin=7;
int brightval;
int ledpin=13;
float ledval;
void setup() {
  // put your setup code here, to run once:
pinMode(brightpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
brightval=digitalRead(brightpin);
Serial.println(brightval);
if(digitalRead(brightpin)==1){
  digitalWrite(ledpin,HIGH);
}
if(digitalRead(brightpin)==0){
  digitalWrite(ledpin,LOW);
}
}
