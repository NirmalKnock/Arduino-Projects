#include<Wire.h>

void setup() {
  Wire.begin(); // initialize the I2c communication

  // put your setup code here, to run once:
  Wire.beginTransmission(Your Address);
  Wire.write(2); // data
  Wire.write(3);// data
  Wire.endTransmission();/ ending the transmission
}

void loop() {
  // put your main code here, to run repeatedly:

}
