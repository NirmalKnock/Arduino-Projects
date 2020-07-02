const int x_pin=A0;
const int y_pin=A1;
const int z_pin=A2;

// Volts per G force to sensitivity
// From the DataSheet

const float sensitivity =0.22;


void setup() {
   // Which makes 3.3v in AREF pin
  Serial.begin(9600);
}

void loop() {
  float x;
  float y;
  float z;

  //Read pin and convert to G
  x = (analogRead(x_pin)-512)*3.3/(sensitivity*1023);
  y = (analogRead(y_pin)-512)*3.3/(sensitivity*1023);
  z = (analogRead(z_pin)-512)*3.3/(sensitivity*1023);

  // Display acceleration

  Serial.print("x :");
  Serial.println(x);
  
  Serial.print("Y :");
  Serial.println(y);
  Serial.print("Z :");
  Serial.println(z);

}
