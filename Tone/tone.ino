int pwm=6;
void setup() {
  pinMode(pwm,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  int i;

  for(i=500;i<=2000;i++){
    tone(pwm,i,300);
    Serial.println(i);
    delay(50);
  }
  for(i=480;i>=0;i--){
     tone(pwm,i,300);
    Serial.println(i);
    delay(50);
    
  }
}
