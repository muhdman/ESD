#define led 4

int inByte = 0;
int state;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    inByte = Serial.read();
  }

  state = map(inByte, 0, 100, 0, 255);
  analogWrite(led, state); 
}
