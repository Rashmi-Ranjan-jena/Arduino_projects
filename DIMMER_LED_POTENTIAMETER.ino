int redled=8;
int potpin=A1;
int potval;
float V2;
void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(potpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
V2=(255./1023.)*potval;
Serial.println(V2);
analogWrite(redled,V2);
}
