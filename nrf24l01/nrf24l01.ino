#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>

// TRANMITTER CODE


#include <SPI.h>


RF24 radio(7,8); // CE and CSN pins

const byte address[6] = " 00001" ;

void setup() {
  // put your setup code here, to run once:
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  // put your main code here, to run repeatedly:
  const char text [] = "Hello world" ;
  radio.write(&text, sizeof(text) );
  delay(1000);

}
