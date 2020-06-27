int temp_pin=A0;
void setup() {
 Serial.begin(9600);
}

void loop() {
  //creating a variables
  float temp;
  float voltage;

  voltage=analogRead(temp_pin)  *5.0/1023 ;// To convert voltage to temperature
  temp=100 * voltage - 50;
  //printing the values
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" deg C: ");
  Serial.println(temp);
  delay(500);
  }