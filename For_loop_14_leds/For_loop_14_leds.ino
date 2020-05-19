int sensorpin = A0;
int led_1 = 45;
int led_2 = 46;
int led_3 = 2;
int led_4 = 3;
int led_5 = 4;
int led_6 = 5;
int led_7 = 6;
int led_8 = 7;
int led_9 = 8;
int led_10 = 9;
int led_11 = 10;
int led_12 = 11;
int led_13 = 12;
int led_14 = 13;
int volts;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorpin, INPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
  pinMode(led_9, OUTPUT);
  pinMode(led_10, OUTPUT);
  pinMode(led_11, OUTPUT);
  pinMode(led_12, OUTPUT);
  pinMode(led_13, OUTPUT);
  pinMode(led_14, OUTPUT);
  
  
  digitalWrite(led_1,LOW);
  digitalWrite(led_2,LOW);
  digitalWrite(led_3,LOW);
  digitalWrite(led_4,LOW);
    digitalWrite(led_5,LOW);
  digitalWrite(led_6,LOW);
  digitalWrite(led_7,LOW);
  digitalWrite(led_8,LOW);
    digitalWrite(led_9,LOW);
  digitalWrite(led_10,LOW);
  digitalWrite(led_11,LOW);
  digitalWrite(led_12,LOW);
    digitalWrite(led_13,LOW);
  digitalWrite(led_14,LOW);
 


Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  
  
  
  Serial.println(volts);
  for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_1, volts);
    delay(0.9999999);
    }
    //delay(5);
    digitalWrite(led_1, LOW);
    delay(25);
 
     for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_2, volts);
    delay(0.9999999);
    }
    //delay(5);
    digitalWrite(led_2, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_3, volts);
    delay(0.9999999);
    }
    //delay(5);
    digitalWrite(led_3, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_4, volts);
    delay(0.9999999);
    }
   // delay(5);
    digitalWrite(led_4, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_5, volts);
    delay(0.9999999);
    }
    //delay(5);
    digitalWrite(led_5, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_6, volts);
    delay(0.9999999);
    }
    //delay(5);
    digitalWrite(led_6, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_7, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_7, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_8, volts);
    delay(0.9999999);
    }
    // delay(5);
    digitalWrite(led_8, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_9, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_9, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_10, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_10, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_11, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_11, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_12, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_12, LOW);
    delay(25);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_13, volts);
    delay(0.9999999);
    }
     //delay(5);
     delay(25);
    digitalWrite(led_13, LOW);
        for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_14, volts);
    delay(1.9999999);
    }
     //delay(5);
    digitalWrite(led_14, LOW);
    delay(1.9999999);

            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_13, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_13, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_12, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_12, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_11, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_11, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_10, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_10, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_9, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_9, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_8, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_8, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_7, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_7, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_6, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_6, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_5, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_5, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_4, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_4, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_3, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_3, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_2, volts);
    delay(0.9999999);
    }
     //delay(5);
    digitalWrite(led_2, LOW);
    delay(25);
            for (volts=0;volts<=250;volts++)
  {
    analogWrite(led_1, volts);
    delay(1.9999999);
    }
     //delay(5);
    digitalWrite(led_1, LOW);
    delay(1.9999999);

    
}
