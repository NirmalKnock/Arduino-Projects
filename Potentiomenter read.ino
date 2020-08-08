int readpin=A0;

void setup(){
Serial.begin(9600);
}

void loop(){
value=analogRead(readpin);
Serial.print("Value: ");
Serial.println(value);
delay(500);

}
