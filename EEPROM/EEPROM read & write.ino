#include<EEPROM.h>
int value=10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  EEPROM.write(24,value);
  value=value+1;
  // put your main code here, to run repeatedly:
  int output=EEPROM.read(24);
  Serial.println(output);
  delay(500);
}