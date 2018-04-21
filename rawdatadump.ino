#include <IRLibRecvPCI.h> 

IRrecvPCI myReceiver(2);

void setup() {
  Serial.begin(9600);
  myReceiver.enableIRIn();
}

void loop() {
  if (myReceiver.getResults()) { 
    Serial.print(F("\n#define RAW_DATA_LEN "));
    Serial.println(recvGlobal.recvLength,DEC);
    Serial.print(F("uint16_t rawData[RAW_DATA_LEN]={\n\t"));
    for(bufIndex_t i=1;i<recvGlobal.recvLength;i++) {
      Serial.print(recvGlobal.recvBuffer[i],DEC);
      Serial.print(F(", "));
      if( (i % 8)==0) Serial.print(F("\n\t"));
    }
    Serial.println(F("1000};"));
    myReceiver.enableIRIn();
  }
}

