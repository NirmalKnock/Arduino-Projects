
const int speaker=9;//pin on Arduino
void setup() {
  pinMode(9,OUTPUT);// declaring pinMode
}
void loop() {
  tone(speaker,440,500);  //pin,frequency,time in ms;
  delay(1000);
  
}