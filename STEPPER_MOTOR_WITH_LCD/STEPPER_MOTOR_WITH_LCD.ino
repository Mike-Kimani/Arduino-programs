// Include Wire Library for I2C
#include <Wire.h>
// Include NewLiquidCrystal Library for I2C
#include <LiquidCrystal_I2C.h>

// Define LCD pinout
const int  en = 2, rw = 1, rs = 0, d4 = 4, d5 = 5, d6 = 6, d7 = 7, bl = 3;

// Define I2C Address - change if reqiuired
const int i2c_addr = 0x27;

LiquidCrystal_I2C lcd(i2c_addr, en, rw, rs, d4, d5, d6, d7, bl, POSITIVE);
#include <Stepper.h>



// initialize the stepper library on pins 8 through 11:
Stepper myStepper(20020, 8, 9, 10, 11);


void setup() {
  // put your setup code here, to run once:
    // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  
  lcd.begin(16,2);
  lcd.clear(); 
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(200);
lcd.setCursor(0,0);
lcd.print("CLOCKWISE");
lcd.clear();
 delay(500);
myStepper.step(-100);
lcd.setCursor(0,0);
lcd.print("COUNTER-CLOCKWISE");
lcd.clear();
 delay(500);

}
