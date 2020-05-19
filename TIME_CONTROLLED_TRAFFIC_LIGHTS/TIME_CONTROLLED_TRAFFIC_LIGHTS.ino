 int redCar = 2;
int yellowCar = 3;
int greenCar = 4;
int greenPed = 10;
int redPed = 9;



void setup() {
  pinMode(redCar, OUTPUT);
pinMode(yellowCar, OUTPUT);
pinMode(greenCar, OUTPUT);
pinMode(redPed, OUTPUT);
pinMode(greenPed, OUTPUT);
//turn on the green light
digitalWrite(greenCar, HIGH);
digitalWrite(redPed, HIGH);
digitalWrite(redCar, LOW);
digitalWrite(yellowCar, LOW);
digitalWrite(greenPed, LOW);
//Like Arduino? Get 25 Arduino Step-by-step Projects Course
//20
Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  
  // put your main code here, to run repeatedly:
  digitalWrite(greenCar, HIGH);
digitalWrite(redPed, HIGH);
digitalWrite(redCar, LOW);
digitalWrite(yellowCar, LOW);
digitalWrite(greenPed, LOW);
delay(7000);
digitalWrite(greenCar, LOW);
digitalWrite(yellowCar, HIGH);
delay(2000);
digitalWrite(yellowCar, LOW);
digitalWrite(redCar, HIGH);
digitalWrite(redPed, LOW);
digitalWrite(greenPed, HIGH);
delay(5000);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);

 

}
