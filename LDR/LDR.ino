int value;
const int light=A0;//pin on Arduino
void setup() {
  pinMode(light,INPUT);// declaring pinMode
  Serial.begin(9600);
}
void loop() {
  value=analogRead(light);
  Serial.println();
  Serial.print("Value:");
  Serial.print(value);
  delay(1000);
  
  
  
}