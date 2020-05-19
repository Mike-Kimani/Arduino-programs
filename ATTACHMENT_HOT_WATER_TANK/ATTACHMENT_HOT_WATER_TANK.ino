int l,t;
int levelSwitch = 2;
int tempSwitch = 3;
int redLed = 11;








void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
    //printf("Input the value of l\n");
    //scanf("%d", &l);
    //printf("Input the value of t\n");
    //scanf("%d", &t);
    
l = digitalRead(tempSwitch);
t = digitalRead(levelSwitch);
    if(l==0)
    {
        if(t==0){
        digitalWrite(redLed, HIGH);
        Serial.println(1);
    }
        else{
       digitalWrite(redLed, LOW);
       Serial.println(0);
    }}
       
    else 
    {digitalWrite(redLed, LOW);   
    Serial.print(0);


}
}
