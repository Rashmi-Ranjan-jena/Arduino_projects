#include<Arduino.h>
#include<TM1637Display.h>
#include<DHT.h>

#define CLK 2
#define DIO 3
#define TYPE DHT11

int sensepin=8;
DHT HT(sensepin,TYPE);

TM1637Display display(CLK,DIO);

int humidity;
int tempC;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
display.setBrightness(0x0f);
HT.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
display.showNumberDec(humidity);
delay(5000);
display.showNumberDec(tempC);
delay(5000);
}
