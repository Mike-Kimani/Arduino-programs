#include <SD.h>
#include <SPI.h> 
#include <NewPing.h>
#define TRIGGER_PIN  11
#define ECHO_PIN     10
#define MAX_DISTANCE 350


// change this to match your SD shield or module;
// change D8 to pin 4 when using Arduino 
const int chipSelect = 53;
float distance;



NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup()
{  
    // Open serial communications and wait for port to open:
    Serial.begin(115200);

    Serial.print("\nInitializing SD card...");
    // we'll use the initialization code from the utility libraries
    // since we're just testing if the card is working!
    if (!SD.begin(chipSelect)) {
        Serial.println("initialization failed.");
        while (1);
    } else {
        Serial.println("Wiring is correct and a card is present.");
    }
    Serial.println("initialization done.");
    startWriting();
}

void loop()
{
    Write_SDcard();
    Serial.print("Distance = ");
    Serial.println(sonar.ping_cm());
    delay(1000);
}

void startWriting()
{
  File dataFile = SD.open("Distance.txt", FILE_WRITE);
  if (dataFile)
  {
    dataFile.println("Distance"); //Write the first row of the excel file
    dataFile.println(); //End of Row move to next row
    dataFile.close();
   }
}

void Write_SDcard()
{
  File dataFile = SD.open("Distance.txt", FILE_WRITE);
  if (dataFile)
  {
    dataFile.print("Distance = "); 
    dataFile.print(sonar.ping_cm()); //Store date on SD card
    dataFile.println(); //End of Row move to next row
    dataFile.close(); //Close the file
   }
  else
   Serial.println("SD card writing failed");
}
