#include <EEPROM.h>

#define btn 4

bool lBtnState = true;
long unsigned int lastMillis;
int setDelay = 20;
int counter, cBtnState;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn, INPUT_PULLUP);
  Serial.begin(9600);
  counter = EEPROM.read(0);
  EEPROM.write(0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  cBtnState = !digitalRead(btn);

  if(millis() - lastMillis > setDelay){
    lastMillis = millis();
    if(cBtnState && lBtnState){
      counter++;
      EEPROM.write(0, counter);
      lBtnState = false;
      Serial.print("Counter: ");
      Serial.println(counter);
    }
    if(cBtnState != 1 && lBtnState != true){
      lBtnState = true;
    }
  }

}
