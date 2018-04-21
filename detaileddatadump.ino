#include "IRLibAll.h"

IRrecvPCI myReceiver(2);
IRdecode myDecoder;

void setup() {
  Serial.begin(9600);
  myReceiver.enableIRIn();
}

void loop() {
  if (myReceiver.getResults()) {
    myDecoder.decode();
    myDecoder.dumpResults(true);
    myReceiver.enableIRIn();
  }
}

