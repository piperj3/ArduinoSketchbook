///////////////////////////////////////////////////////////////
// Arduino Bluetooth Interface with Mindwave
// Sophi Kravitz edit 11-4
// Shane Clements edit 11-5
//////////////////////////////////////////////////////////////////////// 
#include <SoftwareSerial.h>     // library for software serial
SoftwareSerial bluetooth(5, 6);  // RX, TX
int LED=13;

void setup() {
  
//  secuencia de encendido
  pinMode(LED,OUTPUT);
  digitalWrite(LED,HIGH);
  delay(50);
  digitalWrite(LED,LOW);
  delay(50);
  digitalWrite(LED,HIGH);
  delay(100);
  Serial.begin(57600);
  delay(500);
  bluetooth.begin(4800);
  delay(500);
  bluetooth.print("Initializing System....");
  bluetooth.println();
  
}

void loop(){
}
