class ledControl {
  private:
  bool state;
  unsigned long lastMillis;
  int PIN;
  long timerON, timerOFF;
  
  public:
  void init(int pin, long on, long off){
    PIN = pin;
    timerON = on;
    timerOFF = off;
    lastMillis = millis();
    pinMode(PIN, OUTPUT);
  }

  void blinking(){
    if(state)
    switching(timerON);
    else
    switching(timerOFF);
  }

  void switching(long timer){
    if(millis() - lastMillis >= timer){
      digitalWrite(PIN, !state);
      lastMillis = millis();
      state = !state;
    }
  }
};

ledControl LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  LED1.init(3, 781, 515);
  LED2.init(4, 2014, 1348);
  LED3.init(5, 343, 573);
  LED4.init(6, 678, 1839);
  LED5.init(7, 342, 534);
  LED6.init(8, 1478, 326);
  LED7.init(9, 1859, 351);
  LED8.init(10, 777, 888);
}

void loop() {
  // put your main code here, to run repeatedly:
  LED1.blinking();
  LED2.blinking();
  LED3.blinking();
  LED4.blinking();
  LED5.blinking();
  LED6.blinking();
  LED7.blinking();
  LED8.blinking();
}
