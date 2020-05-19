int trigPin = 5;
int echoPin = 4;
float duration;
int distance;

int Buzzpin = 12;
int value;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(10, OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = 0.034*(duration/2);
  Serial.print(distance);
  if(distance<40){
for(value = 0;value<=distance;value++){
  analogWrite(Buzzpin, value);
  delay(30); 
  Serial.println(value);
}
delay(50);
for(value =distance;value>=0;value--){
  analogWrite(Buzzpin, value);
  Serial.println(value);
  delay(30);
}

  }
  else digitalWrite(Buzzpin, LOW);
  delay(10);
}
