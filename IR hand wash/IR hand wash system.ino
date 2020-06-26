int irsensor=8; // connect 8th pin input from ir output
int pump=9; // connect to relay from
bool value;
int i;
void setup() {
  pinMode(irsensor,INPUT);
  pinMode(pump,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 value=digitalRead(irsensor);
 if (value==HIGH){
  Serial.println("ON");
  for(i=0;i<=10;i++){
    digitalWrite(pump,HIGH);
    Serial.println(i);
    delay(1000);
  }
 }
 else{
  digitalWrite(pump,LOW);
  Serial.println("OFF");
 }

}
