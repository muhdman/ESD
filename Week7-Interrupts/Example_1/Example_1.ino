#define led 3
#define btn 2

int state;
bool Bstate = true;
long unsigned int lastMillis;
volatile int btnFlag;
int setDelay = 20;

void setup() {
  // setup pin modes
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(btn), ISR_btn, CHANGE);
}

void loop() {
  if((millis() - lastMillis) > setDelay && btnFlag)
  {
    lastMillis = millis();                                                   
    if(digitalRead(btn) == 0 && Bstate == true)
    {
      state =! state;
      digitalWrite(led, state);
      Bstate = false;
    }
    
    if(digitalRead(btn) == 1 && Bstate == false)
    {
      Bstate = true;
    }
    btnFlag = 0;
  }
}

void ISR_btn()
{
  btnFlag = 1;
}
