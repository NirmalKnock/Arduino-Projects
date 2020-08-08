int pinreading;

void setup() {
  
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  pinreading=analogRead(A0);     
  Serial.println(pinreading);
  delay(500);
  

}
