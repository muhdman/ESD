#define led 3
#define btn 2

int state;
int Bstate = 1;
long unsigned int temp;
volatile int btnFlag;
int debounceTime = 20;

void setup() {
  // setup pin modes
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(btn), ISR_btn, CHANGE);
}

void loop() {
  if((millis() - temp) > debounceTime && btnFlag)
  {
    temp = millis();                                                   
    if(digitalRead(btn) == 0 && Bstate == 1)
    {
      state =! state;
      digitalWrite(led, state);
      Bstate = 0;
    }
    
    else if(digitalRead(btn) == 1 && Bstate == 0)
    {
      Bstate = 1;
    }
    btnFlag = 0;
  }
}

void ISR_btn()
{
  btnFlag = 1;
}
