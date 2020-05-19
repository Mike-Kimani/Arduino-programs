int x = 0;
int y = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 x = analogRead(A0);
 y = analogRead(A1);
 x = map( x,  0 , 1023, 0 , 255);
 y = map( y,  0 , 1023, 0 , 255);
//Serial.println(x);
 // Serial.println(y);
 analogWrite( 8, x);
}
