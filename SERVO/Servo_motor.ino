#include<EEPROM.h>
void setup() {
  Serial.begin(9600);
 
 

}

void loop() {
  int value=analogRead(A0);
  
  for(int i=0;i<=1024;i++){
    EEPROM.write(i,value);
    
    int next=EEPROM.read(i);
    Serial.println(next);
    delay(10);
  }

}