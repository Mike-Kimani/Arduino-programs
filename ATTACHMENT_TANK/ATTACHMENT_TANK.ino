int redLed = 9;
int blueLed = 10;
int greenLed = 11;
float sensor,capacity,voltage;
int sensorpin = A15;




void setup() {
  // put your setup code here, to run once:
  pinMode(sensorpin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  //Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 

    //printf("Input sensor value:\n" );
    sensor = analogRead(sensorpin);
    voltage = map (sensor, 0, 1023, 0 , 5);
    
  

    capacity = voltage*1200;

    if (capacity < 1000) {
            Serial.println("EMPTY\n");
            Serial.println("Capacity is ");
            Serial.print(capacity);
            Serial.println("RED");
            digitalWrite(redLed , HIGH);
            digitalWrite(blueLed, LOW);
            digitalWrite(greenLed, LOW);

            
    }
        if (capacity < 2000 && capacity > 1000) {
            Serial.println("Capacity is ");
            Serial.print(capacity);
            Serial.println("BLUE \n");
            Serial.println("REFILL\n");
            digitalWrite(blueLed, HIGH);
            digitalWrite(redLed, LOW);
            digitalWrite(greenLed, LOW);
        }
            if (capacity > 4500 ){
               Serial.println("TANK FULL\n");
               Serial.println("capacity is ");
               Serial.print(capacity);
               Serial.println("GREEN \n");
                digitalWrite(greenLed, HIGH);
                digitalWrite(redLed, LOW);
                digitalWrite(blueLed, LOW);
            }
            else{
                 digitalWrite(redLed, LOW);
                 digitalWrite(blueLed, LOW);
                 digitalWrite(greenLed, LOW);
            
                 Serial.println("Capacity is");
                 Serial.print(capacity);
                 }


   
  
}
