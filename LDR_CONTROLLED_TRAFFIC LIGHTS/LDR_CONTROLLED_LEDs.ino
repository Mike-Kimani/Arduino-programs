 int redCar = 2;
int yellowCar = 3;
int greenCar = 4;
int greenPed = 10;
int redPed = 9;
int sensorPin= A0;
int crossTime = 10000;
unsigned long changeTime;
void setup() {
// initialize timer
changeTime = millis();
// here we are initializing our pins as outputs
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
}
void loop() {
// this variable will tell us if the button is pressed
int state = analogRead(A0);
state = map(state,0,1023,0,255);
Serial.println(state);
// if the button is pressed and if it has passed 5 seconds since last button
//press
if (state <=6 && (millis() - changeTime) > 5000) {
//call the function to change the lights
changeLights();
}
}
void changeLights() {
digitalWrite(greenCar, LOW); // the green LED will turn off
digitalWrite(yellowCar, HIGH); // the yellow LED will turn on for 2 second
delay(2000);
digitalWrite(yellowCar, LOW); // the yellow LED will turn off
digitalWrite(redCar, HIGH); // the red LED will turn on for 5 seconds
digitalWrite(redPed, LOW);
digitalWrite(greenPed, HIGH);
delay(crossTime);
// flash the ped green
for (int x=0; x<10; x++) {
digitalWrite(greenPed, LOW);
delay(100);
digitalWrite(greenPed, HIGH);
delay(100);
}
digitalWrite(greenPed, LOW);
digitalWrite(redCar, LOW);
digitalWrite(redPed, HIGH);
digitalWrite(greenCar, HIGH);
changeTime = millis();
}
