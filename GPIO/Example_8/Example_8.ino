#define btn1 6
#define btn2 7
#define btn3 8
#define btn4 9
#define btn5 10

int stat1, stat2, stat3, stat4, stat5, lastStat1, lastStat2, lastStat3, lastStat4, lastStat5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(btn4, INPUT_PULLUP);
  pinMode(btn5, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  stat1 = digitalRead(btn1);
  stat2 = digitalRead(btn2);
  stat3 = digitalRead(btn3);
  stat4 = digitalRead(btn4);
  stat5 = digitalRead(btn5);

  if(!stat1 || !stat2 || !stat3 || !stat4 || !stat5){
    Serial.print("A = ");
    lastStat1 += !stat1;
    Serial.print(lastStat1);
    Serial.print(" B = ");
    lastStat2 += !stat2;
    Serial.print(lastStat2);
    Serial.print(" C = ");
    lastStat3 += !stat3;
    Serial.print(lastStat3);
    Serial.print(" D = ");
    lastStat4 += !stat4;
    Serial.print(lastStat4);
    Serial.print(" E = ");
    lastStat5 += !stat5;
    Serial.println(lastStat5);
    delay(400);
  }
}
