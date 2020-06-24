int irsensor=9; // connect sensor out pin to 9th pin of arduino.
int pump=8; // connect relay pin to 8 th pin of arduino.
int value;

void setup() {
  Serial.begin(9600);
  pinMode(9,INPUT);
  pinMode(8,OUTPUT);
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
