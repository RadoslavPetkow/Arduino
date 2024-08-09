int pin7 = 7;
int bright1 = 0;
int bright2 = 16;
int bright3 = 32;
int bright4 = 48;
int bright5 = 64;
int bright6 = 80;
int bright7 = 96;
int bright8 = 112;
int bright9 = 128;
int bright10 = 144;
int bright11 = 160;
int bright12 = 176;
int bright13 = 192;
int bright14 = 208;
int bright15 = 230;
int bright16 = 255;

void setup() {
  pinMode(pin7, OUTPUT); // Set pin 7 as an output
}

void loop() {
  analogWrite(pin7, bright1); // Set brightness to bright1 level
  delay(100); // Wait for 100 milliseconds
  analogWrite(pin7, bright2); // Set brightness to bright2 level
  delay(100);
  analogWrite(pin7, bright3); // and so on...
  delay(100);
  analogWrite(pin7, bright4);
  delay(100);
  analogWrite(pin7, bright5);
  delay(100);
  analogWrite(pin7, bright6);
  delay(100);
  analogWrite(pin7, bright7);
  delay(100);
  analogWrite(pin7, bright8);
  delay(100);
  analogWrite(pin7, bright9);
  delay(100);
  analogWrite(pin7, bright10);
  delay(100);
  analogWrite(pin7, bright11);
  delay(100);
  analogWrite(pin7, bright12);
  delay(100);
  analogWrite(pin7, bright13);
  delay(100);
  analogWrite(pin7, bright14);
  delay(100);
  analogWrite(pin7, bright15);
  delay(100);
  analogWrite(pin7, bright16);
  delay(100);
}
