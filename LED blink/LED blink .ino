int led=LED_BUILTIN;
void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  for(int i=0;i<=5;i++){
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);}

  for(int j=0;j<=5;j++){
  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  delay(2000);}

}