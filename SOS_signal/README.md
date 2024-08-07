# LED Blinking Sequence Arduino Project

This Arduino project demonstrates a sequence of LED blinks with three different LEDs (red, blue, green). The LEDs blink in a specific pattern with defined timings for each state.

## Components

- Arduino board (e.g., Uno, Nano, Mega)
- Breadboard
- 3 LEDs (Red, Blue, Green)
- 3 resistors (220 ohm)
- Jumper wires

## Circuit Diagram

1. **Red LED** connected to pin 9 through a resistor.
2. **Blue LED** connected to pin 7 through a resistor.
3. **Green LED** connected to pin 5 through a resistor.
4. Common GND connection for all LEDs.

### Breadboard Setup

The following images show the breadboard setup:

![Breadboard Setup 1](pic_1.jpeg)
![Breadboard Setup 2](pic_2.jpeg)
![Breadboard Setup 3](pic_3.jpeg)
![Breadboard Setup 4](pic_4.jpeg)

## Code

```cpp
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
```

## How to Use

1. **Connect your Arduino** to your computer via the USB cable.
2. **Open the Arduino IDE**.
3. **Load the provided code** into the Arduino IDE.
4. **Upload the code** to your Arduino board.
5. **Observe the LED sequence** on your breadboard.

## Explanation

- **Constants Definition:**
  - `int redLED = 9;` assigns pin 9 to the red LED.
  - `int blueLED = 7;` assigns pin 7 to the blue LED.
  - `int greenLED = 5;` assigns pin 5 to the green LED.
  - `int dit = 500;` sets the duration for a short blink.
  - `int dat = 1000;` sets the duration for a long blink.
  - `int breakbip = 3000;` sets the duration for a break between sequences.

- **Setup Function:**
  - `pinMode(redLED, OUTPUT);` sets the red LED pin as an output.
  - `pinMode(blueLED, OUTPUT);` sets the blue LED pin as an output.
  - `pinMode(greenLED, OUTPUT);` sets the green LED pin as an output.

- **Loop Function:**
  - Blinks the red LED three times, with each blink lasting `dit` milliseconds and followed by an equal `dit` milliseconds off period.
  - Turns the green LED on for a break period of `breakbip` milliseconds and then off for the same duration.
  - Blinks the blue LED three times, with each blink lasting `dat` milliseconds and followed by an equal `dat` milliseconds off period.
  - Turns the green LED on for another break period of `breakbip` milliseconds and then off for the same duration.
  - Repeats the red LED blink sequence and the green LED break period as before.

## Troubleshooting

- Ensure all connections are secure and correct according to the circuit diagram.
- Check that the LEDs and resistors are not damaged.
- Verify that the correct COM port and board type are selected in the Arduino IDE.

## License

This project is licensed under the MIT License. Feel free to use and modify the code as per the terms of the license.

---
