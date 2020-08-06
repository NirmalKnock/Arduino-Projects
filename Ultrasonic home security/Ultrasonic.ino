const int trigPin = 7; // Connect 7 th pin of arduino.
const int echoPin = 6; // Connect 6 th pin of arduino.

float duration, distance;


void setup() {
  
  pinMode(trigPin, OUTPUT);  
  
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(500);

  // GSM Section
  
  if(distance<200){   //use can increase or decrease the distance in CM .
    Serial.println("OK");
    delay(20000);
    Serial.println("ATD+YOUR NUMBER;");// change your number with country code .eg); +91XXXXXX
    delay(150000);
    Serial.println("ATH");
    delay(1000);
    }
  }
