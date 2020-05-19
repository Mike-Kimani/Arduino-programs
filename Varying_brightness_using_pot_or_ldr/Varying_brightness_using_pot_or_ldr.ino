int sensorpin = A0;
int led_1 = 2;
int led_2 = 3;
int led_3 = 4;
int led_4 = 5;
int led_5 = 6;
int led_6 = 7;
int led_7 = 8;
int led_8 = 9;
int led_9 = 10;
int led_10 = 11;
int led_11 = 12;
int led_12 = 22;
int led_13 = 24;
int led_14 = 26;
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
  volts = analogRead(sensorpin);
  
  volts =map(volts,0,1023,0,1023);
  Serial.println(volts);
  if (volts>0&&volts<=70){
    analogWrite(led_1, volts);}
   else digitalWrite(led_1, LOW) ;
   if(volts>=70&&volts<=140){ 
    analogWrite(led_2, volts);}
    else digitalWrite(led_2, LOW);
   if(volts>=140&&volts<=210){ 
    analogWrite(led_3, volts);}
    else digitalWrite(led_3, LOW);
   if(volts>=210&&volts<=280){ 
    analogWrite(led_4, volts);}
    else digitalWrite(led_4, LOW);
     if(volts>=280&&volts<=350){ 
    analogWrite(led_5, volts);}
    else digitalWrite(led_5, LOW);
     if(volts>=350&&volts<=420){ 
    analogWrite(led_6, volts);}
    else digitalWrite(led_6, LOW);
     if(volts>=420&&volts<=490){ 
    analogWrite(led_7, volts);}
    else digitalWrite(led_7, LOW);
     if(volts>=490&&volts<=560){ 
    analogWrite(led_8, volts);}
    else digitalWrite(led_8, LOW);
     if(volts>=560&&volts<=630){ 
    analogWrite(led_9, volts);}
    else digitalWrite(led_9, LOW);
    if(volts>=630&&volts<=700){ 
    analogWrite(led_10, volts);}
    else digitalWrite(led_10, LOW);
    if(volts>=700&&volts<=770){ 
    analogWrite(led_11, volts);}
    else digitalWrite(led_11, LOW);
    if(volts>=770&&volts<=840){ 
    analogWrite(led_12, volts);}
    else digitalWrite(led_12, LOW);
    if(volts>=840&&volts<=910){ 
    analogWrite(led_13, volts);}
    else digitalWrite(led_13, LOW);
    if(volts>=910&&volts<=980){ 
    analogWrite(led_14, volts);}
    else digitalWrite(led_14, LOW);
    
    
        
 
   //else digitalWrite(light ,LOW);

}
