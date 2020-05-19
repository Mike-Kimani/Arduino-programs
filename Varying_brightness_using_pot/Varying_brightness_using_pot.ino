int sensorpin = A0;
int light = 8;
int volts,voltage;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorpin, INPUT);
  pinMode(light, OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  volts = analogRead(sensorpin);
  voltage =map(volts,0,1023,0,5);
  Serial.println(voltage);
  //if (voltage>=1){
    analogWrite(light, voltage);
 
   //else digitalWrite(light ,LOW);

}
