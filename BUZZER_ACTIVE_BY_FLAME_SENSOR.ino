int flamepin=8;
int buzzpin=9;
int flameval;
void setup() {
  // put your setup code here, to run once:
pinMode(flamepin,INPUT);
pinMode(buzzpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
flameval=digitalRead(flamepin);
Serial.println(flameval);
if(flameval==0){
  digitalWrite(buzzpin,HIGH);
}
if(flameval==1){
  digitalWrite(buzzpin,LOW);
}
}
