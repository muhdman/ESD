char *admux = (char*) 0x7C;
volatile unsigned char *adcsra = (unsigned char*) 0x7A;
volatile unsigned char *adch = (unsigned char*) 0x79;
volatile unsigned char *adcl = (unsigned char*) 0x78;

void setup() {
  // put your setup code here, to run once:
  *admux = 0b01000000;
  *adcsra = 0b11100111;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lowbyte = (*adcl);
  int highbyte = (*adch);
  int value = (highbyte << 8) | lowbyte;
  Serial.println(value);
}
