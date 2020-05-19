

//#include <Drive.h>

//#include <L298N.h>

/*  Arduino DC Motor Control - PWM | H-Bridge | L298N  -  Example 01

    by Dejan Nedelkovski, www.HowToMechatronics.com
*/

int enA= 9;
int enB =10;
int in1 = 6;
int in2 = 7;
int in3 = 5;
int in4 = 8;
int button= 4;

int rotDirection = 0;
int pressed = false;

void setup() {
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(button, INPUT);
  // Set initial rotation direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void loop() {
  int potValue = analogRead(A0); // Read potentiometer value
  int pwmOutput = map(potValue, 0, 1023, 0 , 255); // Map the potentiometer value from 0 to 255
  Serial.println(pwmOutput);
  analogWrite(enA, pwmOutput); // Send PWM signal to L298N Enable pin
  analogWrite(enB, pwmOutput); // Send PWM signal to L298N Enable pin


  // Read button - Debounce
  if (digitalRead(button) == true) {
    pressed = !pressed;
  }
  while (digitalRead(button) == true);
  delay(1000);

  // If button is pressed - change rotation direction
  if (pressed == true  & rotDirection == 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
     digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    
    rotDirection = 1;
    delay(1000);
  }
  // If button is pressed - change rotation direction
  if (pressed == false & rotDirection == 1) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    rotDirection = 0;
    delay(1000);
  }
  //Serial.println(button);
}
