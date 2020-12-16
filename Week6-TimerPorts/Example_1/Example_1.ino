#define led 9

char inByte;
unsigned int integerValue;
int state;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    integerValue = 0;
    while(1){
      inByte = Serial.read();
      if(inByte == '\n') break;
      if(inByte == -1) continue;
      integerValue *= 10;
      integerValue = ((inByte - 48) + integerValue);
    }
  }

  state = map(integerValue, 0, 100, 0, 255);
  analogWrite(led, state);
  Serial.println(state);
}
