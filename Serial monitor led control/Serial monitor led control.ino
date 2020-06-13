
int led=13;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  while(!Serial);
  Serial.print("type 0 or 1");

}

void loop() {
  if (Serial.available()){
    char value=Serial.read();
    if (value=='1'){
      digitalWrite(led,HIGH);
      Serial.println("ON");
    }
    else if(value=='0'){
      digitalWrite(led,LOW);
      Serial.println("OFF");
    }
  }
  
}