int buzzpin=8;
int delay1=50;
int delay2=35;
int delay3=30;
int delay4=60;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int j=1;j<=3;j=j+1){
digitalWrite(buzzpin,HIGH);
delay(delay1);
digitalWrite(buzzpin,LOW);
delay(delay1);
}
for(int j=1;j<=3;j=j+1){
digitalWrite(buzzpin,HIGH);
delay(delay2);
digitalWrite(buzzpin,LOW);
delay(delay2);
}
for(int j=1;j<=3;j=j+1){
digitalWrite(buzzpin,HIGH);
delay(delay3);
digitalWrite(buzzpin,LOW);
delay(delay3);
}
for(int j=1;j<=3;j=j+1){
digitalWrite(buzzpin,HIGH);
delay(delay4);
digitalWrite(buzzpin,LOW);
delay(delay4);
}
}
