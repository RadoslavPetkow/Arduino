String mes1("A Light With Brightness ");
String mes2(" Has an Intensity of ");
String mes3(".");
int bright(1);

int pause(1000);
int x;

void setup() {
  // put your setup code here, to run once: A Light With Brightness 5.00 Has an Intensity of 50.00.
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = bright * 10;
  Serial.print(mes1);
  Serial.print(bright);
  Serial.print(mes2);
  Serial.print(x);
  Serial.println(mes3);
  delay(pause);
  bright = bright + 1;
}
