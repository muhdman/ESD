#define pot A0

int temp;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(pot);
  Serial.println(temp);
}
