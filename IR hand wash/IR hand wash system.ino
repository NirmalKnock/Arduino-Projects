int irsensor=8; // connect sensor out pin to 9th pin of arduino.
int pump=9; // connect relay pin to 8 th pin of arduino.
int value;

void setup() {
  Serial.begin(9600);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  value=digitalRead(irsensor);//Reading input value
  Serial.println("Reading sensor output");
  if(value==HIGH){
    digitalWrite(pump,HIGH);
    delay(10000); // 10 seconds motor ON (or) you can change seconds
    Serial.println("PUMP ON");
  }
  else{
    digitalWrite(pump,LOW);
    Serial.println("PUMP OFF");
  }
  
  

}
