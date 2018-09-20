#include <CanSatKit.h>

void setup() {
  // Remember to set the same radio parameters in
  // transmitter and receiver boards!
  CanSatKitRadio.begin(CanSatPins_Radio_CS,
                       CanSatPins_Radio_DIO0,
                       433.0,
                       Bandwidth_125000_Hz,
                       SpreadingFactor_9,
                       CodingRate_4_8);
}

void loop() {
  CanSatKitRadio.transmit("Hello World!");
  delay(250);
}
