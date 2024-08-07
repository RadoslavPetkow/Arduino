int redLED = 5;
int blueLED = 7;
int greenLED = 9;
int yellowLED = 11;

void setup() {
  // Initialize the LED pins as outputs
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // Each step represents a different LED combination
  
  // Step 0: All LEDs off (initial state, ensure no LEDs are on)
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);

  // Step 1: Only the red LED is on
  digitalWrite(redLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  delay(1000);

  // Step 2: Only the blue LED is on
  digitalWrite(blueLED, HIGH);
  delay(500);
  digitalWrite(blueLED, LOW);
  delay(1000);

  // Step 3: Red and blue LEDs are on
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  delay(1000);

  // Step 4: Only the green LED is on
  digitalWrite(greenLED, HIGH);
  delay(500);
  digitalWrite(greenLED, LOW);
  delay(1000);

  // Step 5: Red and green LEDs are on
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(1000);

  // Step 6: Blue and green LEDs are on
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  delay(500);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(1000);

  // Step 7: Red, blue, and green LEDs are on
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(1000);

  // Step 8: Only the yellow LED is on
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Step 9: Red and yellow LEDs are on
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Step 10: Blue and yellow LEDs are on
  digitalWrite(blueLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(blueLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Step 11: Red, blue, and yellow LEDs are on
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Step 12: Green and yellow LEDs are on
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Step 13: Red, green, and yellow LEDs are on
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Step 14: Blue, green, and yellow LEDs are on
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Step 15: All LEDs are on
  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  delay(1000);
}