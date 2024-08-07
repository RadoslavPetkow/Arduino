
int redLED =9;
int blueLED =7;
int greenLED =5;
int dit = 500;
int dat = 1000;
int breakbip = 3000;

void setup() {

pinMode(redLED,OUTPUT);
pinMode(blueLED,OUTPUT);
pinMode(greenLED,OUTPUT);

}

void loop() {

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(greenLED,HIGH);
delay(breakbip);
digitalWrite(greenLED,LOW);
delay(breakbip);

digitalWrite(blueLED,HIGH);
delay(dat);
digitalWrite(blueLED,LOW);
delay(dat);
digitalWrite(blueLED,HIGH);
delay(dat);
digitalWrite(blueLED,LOW);
delay(dat);
digitalWrite(blueLED,HIGH);
delay(dat);
digitalWrite(blueLED,LOW);
delay(dat);

digitalWrite(greenLED,HIGH);
delay(breakbip);
digitalWrite(greenLED,LOW);
delay(breakbip);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(greenLED,HIGH);
delay(breakbip);
digitalWrite(greenLED,LOW);
delay(breakbip);
}
