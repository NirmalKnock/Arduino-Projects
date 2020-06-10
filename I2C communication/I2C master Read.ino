#include<Wire.h>

void setup() {
  Serial.begin(9600);

  Wire.begin(); // initialize the I2c communication
  Wire.requestFrom(8,6); // Address,  Request Byte is 6 ; this value is in buffer

  // to read from the buffer ,if byte is lesser than actual 
  while(Wire.available()){
    char c =Wire.read();
    Serial.println(c);
    delay(300);
  }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
