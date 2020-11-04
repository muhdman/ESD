#define btn1 6
#define btn2 7
#define btn3 8
#define btn4 9
#define btn5 10

int stat1, stat2, stat3, stat4, stat5, lastStat1, lastStat2, lastStat3, lastStat4, lastStat5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
  pinMode(btn4, INPUT);
  pinMode(btn5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stat1 = digitalRead(btn1);
  stat2 = digitalRead(btn2);
  stat3 = digitalRead(btn3);
  stat4 = digitalRead(btn4);
  stat5 = digitalRead(btn5);

  lastStat1 =+ stat1;
  lastStat2 =+ stat2;
  lastStat3 =+ stat3;
  lastStat4 =+ stat4;
  lastStat5 =+ stat5;

  if(stat1 || stat2 || stat3 || stat4 || stat5){
    Serial.print("A = ");
    Serial.print(lastStat1);
    Serial.print(" B = ");
    Serial.print(lastStat2);
    Serial.print(" C = ");
    Serial.print(lastStat3);
    Serial.print(" D = ");
    Serial.print(lastStat4);
    Serial.print(" E = ");
    Serial.println(lastStat5);
  }
}
