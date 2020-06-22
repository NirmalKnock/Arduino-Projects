int input=13;
int value;
void setup() {
  Serial.begin(9600);
  pinMode(input,INPUT_PULLUP);
  
  // put your setup code here, to run once:

}

void loop() {
  value=digitalRead(input);
  if(value==HIGH){
    digitalWrite(input,LOW);
  }
  else{
    digitalWrite(input,HIGH);
  }
  

}
