int reading;

void setup() {
  
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  reading=analogRead(A0);
  Serial.println(reading);
  delay(500);
  // put your main code here, to run repeatedly:

}
