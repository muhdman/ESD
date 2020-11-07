#define led1 6
#define led2 7

unsigned long lastMillis1, lastMillis2;
bool status1, status2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  lastMillis1 = millis();
  lastMillis2 = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(status1){
    // LED 1 will turn ON for 750 ms
    if(millis() - lastMillis1 >= 750){
      digitalWrite(led1, LOW);
      lastMillis1 = millis();
      status1 = false;
    }
  }
  //LED 1 will turn OFF for 350 ms
  else{
    if(millis() - lastMillis1 >= 350){
      digitalWrite(led1, HIGH);
      lastMillis1 = millis();
      status1 = true;
    }
  }

  if(status2){
    //LED 2 will turn ON for 400 ms
    if(millis() - lastMillis2 >= 400){
      digitalWrite(led2, LOW);
      lastMillis2 = millis();
      status2 = false;
    }
  }
  //LED 2 will turn OFF for 600 ms
  else{
    if(millis() - lastMillis2 >= 600){
      digitalWrite(led2, HIGH);
      lastMillis2 = millis();
      status2 = true;
    }
  }
}
