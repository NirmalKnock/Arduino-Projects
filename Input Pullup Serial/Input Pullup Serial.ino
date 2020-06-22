int input=9  ;
int led=13;
bool value;
void setup() {
  Serial.begin(9600);
  pinMode(input,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  value=digitalRead(input);
  if(value==HIGH){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
  

}
