#include<Arduino.h>
#include<TM1637Display.h>

#define CLK 2
#define DIO 3

TM1637Display display(CLK,DIO);
void setup() {
  // put your setup code here, to run once:
display.setBrightness(0x0f);
}

void loop() {
  // put your main code here, to run repeatedly:
display.showNumberDec(4,false,2,2);
}
