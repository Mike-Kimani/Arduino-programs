 int voltage,velocity;
int Sensorpin = A0;
int redLed = 8;
int yellowLed = 12;
int whiteLed = 9;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once;
  pinMode(7, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(Sensorpin, INPUT);
  
digitalWrite(redLed, LOW);
digitalWrite(yellowLed, LOW);
digitalWrite(whiteLed, LOW);
}


void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(A0);
  velocity = map(voltage,0,1023,0,255);
  analogWrite(7,velocity);
  analogWrite(2,velocity);
  if(velocity>=200)
  {
Serial.print(velocity);
Serial.println("You are driving at a very high speed please be careful ");
digitalWrite(yellowLed, LOW);
digitalWrite(whiteLed, LOW);
digitalWrite(redLed,HIGH);
delay(300);
digitalWrite(redLed,LOW);
delay(300);

  }
  else if(velocity>=100&&velocity<200)
{
Serial.print(velocity);
Serial.println("You are driving at a good speed  ");
digitalWrite(yellowLed, HIGH);
digitalWrite(redLed, LOW);
digitalWrite(whiteLed, LOW);
}
else if(velocity<100&&velocity>0){
  Serial.print(velocity);
  Serial.println("You are driving at a comfortable speeed ");
  digitalWrite(whiteLed, HIGH);
digitalWrite(yellowLed, LOW);
digitalWrite(redLed, LOW);
}
else{
  Serial.println(velocity);
  digitalWrite(redLed, LOW);
digitalWrite(yellowLed, LOW);
digitalWrite(whiteLed, LOW);
}


  
}
