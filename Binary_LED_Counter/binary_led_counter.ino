int pins[] = {4, 5, 6, 7, 8, 9, 10};  // Define the pins for the LEDs

void setup() {
  // Initialize the LED pins as outputs
  for (int i = 0; i < 7; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  for (int num = 0; num < 128; num++) {  // Loop through numbers from 0 to 127
    displayBinary(num);                  // Display the current number in binary
    delay(1000);                         // Wait for 1 second
  }
}

void displayBinary(int num) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pins[i], (num >> i) & 1);  // Write the bit value to the corresponding LED pin
  }
}