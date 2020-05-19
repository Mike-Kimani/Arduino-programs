int LED1 = 11;
int LED2 = 12;
int LED3 = 13;
int LED4 = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED4, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  delay(200);
  digitalWrite(LED2, LOW);
  delay(200);
  digitalWrite(LED3, LOW);
  delay(200);
  digitalWrite(LED4, LOW);
  delay(200);

}
