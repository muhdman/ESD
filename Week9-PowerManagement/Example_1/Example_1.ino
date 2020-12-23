#include "LowPower.h"

#define btn 2

volatile int rep = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  attachInterrupt(0, wakeUp, HIGH);
  LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
  detachInterrupt(0);
  
  for(int i = 0; i < rep; i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}

void wakeUp(){
  rep++;
}
