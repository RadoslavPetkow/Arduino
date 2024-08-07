int redLED = 9;       // Pin for the red LED
int blueLED = 7;      // Pin for the blue LED
int greenLED = 5;     // Pin for the green LED
int dit = 500;        // Duration for a short blink (500 ms)
int dat = 1000;       // Duration for a long blink (1000 ms)
int breakbip = 3000;  // Duration for a break between sequences (3000 ms)

void setup() {
  // Initialize the LED pins as outputs
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Sequence for red LED blinks
  digitalWrite(redLED, HIGH);  // Turn red LED on
  delay(dit);                  // Wait for dit duration
  digitalWrite(redLED, LOW);   // Turn red LED off
  delay(dit);                  // Wait for dit duration
  digitalWrite(redLED, HIGH);  // Repeat
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  // Pause with green LED
  digitalWrite(greenLED, HIGH);  // Turn green LED on
  delay(breakbip);                // Wait for breakbip duration
  digitalWrite(greenLED, LOW);   // Turn green LED off
  delay(breakbip);                // Wait for breakbip duration

  // Sequence for blue LED blinks
  digitalWrite(blueLED, HIGH);  // Turn blue LED on
  delay(dat);                   // Wait for dat duration
  digitalWrite(blueLED, LOW);   // Turn blue LED off
  delay(dat);                   // Wait for dat duration
  digitalWrite(blueLED, HIGH);  // Repeat
  delay(dat);
  digitalWrite(blueLED, LOW);
  delay(dat);
  digitalWrite(blueLED, HIGH);
  delay(dat);
  digitalWrite(blueLED, LOW);
  delay(dat);

  // Pause with green LED
  digitalWrite(greenLED, HIGH);  // Turn green LED on
  delay(breakbip);                // Wait for breakbip duration
  digitalWrite(greenLED, LOW);   // Turn green LED off
  delay(breakbip);                // Wait for breakbip duration

  // Repeat sequence for red LED blinks
  digitalWrite(redLED, HIGH);  // Turn red LED on
  delay(dit);                  // Wait for dit duration
  digitalWrite(redLED, LOW);   // Turn red LED off
  delay(dit);                  // Wait for dit duration
  digitalWrite(redLED, HIGH);  // Repeat
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  // Pause with green LED
  digitalWrite(greenLED, HIGH);  // Turn green LED on
  delay(breakbip);                // Wait for breakbip duration
  digitalWrite(greenLED, LOW);   // Turn green LED off
  delay(breakbip);                // Wait for breakbip duration
}
