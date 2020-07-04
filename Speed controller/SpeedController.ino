const int x_pin = A0;
const int y_pin = A1;
const int z_pin = A2;
const int led_pin = 2;
 
// Volts per G-Force
const float sensitivity = 0.206;
 
// Ideal conditions to turn on LED (G-Force)
const float ideal_x = 0.0;
const float ideal_y = 0.0;
const float ideal_z = 1.0;
 
// Acceptable tolerance around 1G (z) or 0G (x, y)
const float tolerance = 0.1;
 
void setup() {
  analogReference(EXTERNAL);
  pinMode(led_pin, OUTPUT);
}
 
void loop() {
 
  float x;
  float y;
  float z;
 
  // Read pins and convert to G
  x = (analogRead(x_pin) - 512) * 3.3 / (sensitivity * 1023);
  y = (analogRead(y_pin) - 512) * 3.3 / (sensitivity * 1023);
  z = (analogRead(z_pin) - 512) * 3.3 / (sensitivity * 1023);
  
  // Turn on LED if accelerometer is facing up and still
  if ( (x > ideal_x - tolerance) && (x < ideal_x + tolerance) &&
       (y > ideal_y - tolerance) && (y < ideal_y + tolerance) &&
       (z > ideal_z - tolerance) && (z < ideal_z + tolerance) ) {
    digitalWrite(led_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);
  }
 
  delay(100);
}

