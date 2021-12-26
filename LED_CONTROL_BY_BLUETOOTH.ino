char incomingvalue;
int ledpin=13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  incomingvalue=Serial.read();
  Serial.println(incomingvalue);
  if(incomingvalue == '1'){
    digitalWrite(ledpin,HIGH);
  }
  else if(incomingvalue == '0'){
    digitalWrite(ledpin,LOW);
  }
}
}
