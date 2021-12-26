#include<DHT.h>
#define TYPE DHT11
int sensepin=8;
DHT HT(sensepin,TYPE);
float humidity;
float tempc;
float tempf;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempc=HT.readTemperature();
tempf=HT.readTemperature(true);
Serial.print("HUMIDITY = ");
Serial.println(humidity);
Serial.print("TEMPC = ");
Serial.print(tempc);
Serial.println(" C ");
Serial.print("TEMPF = ");
Serial.print(tempf);
Serial.println(" F ");
delay(2000);
}
