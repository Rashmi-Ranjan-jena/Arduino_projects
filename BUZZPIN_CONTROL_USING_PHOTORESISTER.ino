int buzzpin=8;
int ldrpin=7;
int ldrval;
int potpin=A1;
int potval;
float timespace;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
pinMode(ldrpin,INPUT);
pinMode(potpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
timespace=(9940./1023.)*potval+60;
ldrval=digitalRead(ldrpin);
Serial.print("potval");
Serial.print("=");
Serial.println(potval);
Serial.print("ldrval");
Serial.print("=");
Serial.println(ldrval);
if(ldrval==0)
{
  digitalWrite(buzzpin,HIGH);
  delay(timespace);
  digitalWrite(buzzpin,LOW);
  delay(timespace);
}
if(ldrval==1){
  digitalWrite(buzzpin,LOW);
}
}
