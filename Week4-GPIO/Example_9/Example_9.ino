class ledControl {
  bool state;
  unsigned long lastMillis;
  int ON, OFF, PIN;
  
  public:
  ledControl(int pin, long on, long off){
    PIN = pin;
    pinMode(pin, OUTPUT);
    ON = on;
    OFF = off;
    lastMillis = millis();
  }

  void blinking(){
    if(state){
      if(millis() - lastMillis >= ON){
        digitalWrite(PIN, LOW);
        lastMillis = millis();
        state = false;
      }
    }
    else{
      if(millis() - lastMillis >= OFF){
        digitalWrite(PIN, HIGH);
        lastMillis = millis();
        state = true;
      }
    }
  }
};

ledControl LED1(3, 781, 515);
ledControl LED2(4, 2014, 1348);
ledControl LED3(5, 343, 573);
ledControl LED4(6, 678, 1839);
ledControl LED5(7, 342, 534);
ledControl LED6(8, 1478, 326);
ledControl LED7(9, 1859, 351);
ledControl LED8(10, 777, 888);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
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
