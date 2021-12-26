int touchpin=13;
int touchval;
int ledpin=7;
void setup() {
  // put your setup code here, to run once:
pinMode(touchpin,INPUT);
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
touchval=digitalRead(touchpin);
if(touchval==0){
  digitalWrite(ledpin,LOW);
}
if(touchval==1){
  digitalWrite(ledpin,HIGH);
}
}
