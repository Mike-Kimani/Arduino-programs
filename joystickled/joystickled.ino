const int whitePin=2;
const int yellowPin=3;
const int redPin=4;
const int orangePin=5;
const int greenPin=8;
const int sw=7;
int swValue;
int xValue;
int yValue;


void setup() {
  // put your setup code here, to run once:
  pinMode(whitePin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(orangePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(sw,INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 xValue=analogRead(A8);
 yValue=analogRead(A9);
 swValue=digitalRead(sw);
 xValue=map(xValue,0,1023,0,255);
 yValue=map(yValue,0,1023,0,255);
 if(xValue==127){
  digitalWrite(redPin,HIGH);
  digitalWrite(whitePin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(orangePin,LOW);
  digitalWrite(greenPin,LOW);
  }
  else if(xValue<127){
 digitalWrite(redPin,LOW);
  digitalWrite(whitePin,HIGH);
  digitalWrite(yellowPin,LOW);
  digitalWrite(orangePin,LOW);
  digitalWrite(greenPin,LOW);
  }
  else if(xValue>127){
    digitalWrite(redPin,LOW);
  digitalWrite(whitePin,LOW);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(orangePin,LOW);
  digitalWrite(greenPin,LOW);
    }
    if(yValue==127){
  digitalWrite(redPin,HIGH);
  digitalWrite(whitePin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(orangePin,LOW);
  digitalWrite(greenPin,LOW);
  }
  else if(yValue<127){
 digitalWrite(redPin,LOW);
  digitalWrite(whitePin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(orangePin,HIGH);
  digitalWrite(greenPin,LOW);
  }
  else if(yValue>127){
    digitalWrite(redPin,LOW);
  digitalWrite(whitePin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(orangePin,LOW);
  digitalWrite(greenPin,HIGH);
    }

if (swValue == HIGH) {
    digitalWrite(redPin, HIGH);
  } else {
    digitalWrite(redPin,LOW);
  }

Serial.println(xValue);

Serial.println(yValue);

}
