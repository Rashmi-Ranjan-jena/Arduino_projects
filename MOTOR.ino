int speedpin=5;
int dir1=4;
int dir2=3;
int mspeed=255;
int xpin=A1;
int xval;
void setup() {
  // put your setup code here, to run once:
pinMode(speedpin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(xpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
xval=analogRead(xpin);
Serial.println(xval);
if(xval>515){  
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedpin,mspeed);
}
if(xval<515){  
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
analogWrite(speedpin,mspeed);
}
if(xval==515){  
digitalWrite(dir1,LOW);
digitalWrite(dir2,LOW);
analogWrite(speedpin,mspeed);
}
}
