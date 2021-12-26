int bluepin=7;
int greenpin=6;
int redpin=5;
int xpin=A0;
int ypin=A1;
int switchpin=8;
int xval;
int yval;
int switchval;
void setup() {
  // put your setup code here, to run once:
pinMode(bluepin,OUTPUT);
pinMode(greenpin,OUTPUT);
pinMode(redpin,OUTPUT);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(switchpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
xval=analogRead(xpin);
yval=analogRead(ypin);
switchval=digitalRead(switchpin);
Serial.println(xval);

Serial.println(yval);

Serial.println(switchval);

if(xval>=516 && yval==525){
  digitalWrite(bluepin,HIGH);
  digitalWrite(redpin,LOW);
  digitalWrite(greenpin,LOW);
}
if(xval==515 && yval>=525){
  digitalWrite(bluepin,LOW);
  digitalWrite(redpin,HIGH);
  digitalWrite(greenpin,LOW);
}
if(xval==515 && yval<=525){
  digitalWrite(bluepin,LOW);
  digitalWrite(redpin,LOW);
  digitalWrite(greenpin,HIGH);
}
if(xval==515 && yval==525){
  digitalWrite(bluepin,HIGH);
  digitalWrite(redpin,LOW);
  digitalWrite(greenpin,HIGH);
}
}
