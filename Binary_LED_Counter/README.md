# Binary LED Counter

This Arduino project demonstrates a binary LED counter using seven LEDs connected to an Arduino board. The LEDs count from 0 to 127 in binary.

## Components

- Arduino board (e.g., Uno, Nano, Mega)
- Breadboard
- 7 LEDs (different colors for better visualization)
- 7 resistors (220 ohm)
- Jumper wires

## Circuit Diagram

1. **LED connections**:
   - Pin 4: LED 1
   - Pin 5: LED 2
   - Pin 6: LED 3
   - Pin 7: LED 4
   - Pin 8: LED 5
   - Pin 9: LED 6
   - Pin 10: LED 7
2. Connect one side of each resistor to the corresponding pin and the other side to the anode (long leg) of each LED.
3. Connect the cathode (short leg) of each LED to the ground rail of the breadboard.
4. Connect the ground rail of the breadboard to the GND pin on the Arduino.

### Breadboard Setup

Here are the images of the breadboard setup:

![Breadboard Setup 1](images/pic_1.jpeg)
![Breadboard Setup 2](images/pic_2.jpeg)
![Breadboard Setup 3](images/pic_3.jpeg)
![Breadboard Setup 4](images/pic_4.jpeg)

## Code

The following code implements the binary LED counter:

```cpp
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
