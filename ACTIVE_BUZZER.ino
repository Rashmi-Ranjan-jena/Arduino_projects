int buzzerpin=8;
int buzzerval;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzerpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("please enter your number");
while(Serial.available()==0){
  
}
buzzerval=Serial.parseInt();
if(buzzerval>10)
{
  digitalWrite(buzzerpin,HIGH);
  delay(100);
  digitalWrite(buzzerpin,LOW);
  delay(3000);
}
}
