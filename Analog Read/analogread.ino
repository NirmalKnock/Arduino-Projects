int value;

void setup() {
  
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  value=analogRead(A0);
  Serial.println(value);
  delay(500);
  // put your main code here, to run repeatedly:

}