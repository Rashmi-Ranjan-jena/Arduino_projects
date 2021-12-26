int redled=8;
int blueled=9;
int greenled=10;

int pushbuttom=11;
int buttomval;

void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(blueled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(pushbuttom,INPUT);
digitalWrite(pushbuttom,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
buttomval=digitalRead(pushbuttom);
if(buttomval==1){
digitalWrite(redled,HIGH);
digitalWrite(blueled,HIGH);
digitalWrite(greenled,HIGH);
}

if(buttomval==0){
digitalWrite(redled,LOW);
digitalWrite(blueled,LOW);
digitalWrite(greenled,LOW);
}
}
