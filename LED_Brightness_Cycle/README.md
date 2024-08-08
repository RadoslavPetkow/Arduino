# LED_Brightness_Cycle.ino

This Arduino sketch cycles the brightness of an LED connected to pin 7 through 16 different levels. It gradually increases the brightness from off (0) to fully on (255) in steps, creating a smooth transition effect.

## Hardware Requirements

- Arduino board (e.g., Uno, Mega)
- LED
- Resistor (220Ω recommended)
- Breadboard and jumper wires

## Circuit Diagram

```
Arduino Pin 7 ----- Resistor ----- LED ----- GND
```

## Code Explanation

The code defines 16 different brightness levels and uses the `analogWrite` function to set the brightness of the LED connected to pin 7. The brightness is increased in steps, with a delay of 100 milliseconds between each step.

### Code

```cpp
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
```

## How to Use

1. **Connect the LED**: Connect the longer leg (anode) of the LED to pin 7 of the Arduino through a resistor (220Ω). Connect the shorter leg (cathode) to the ground (GND).
2. **Upload the Code**: Open the Arduino IDE, copy the provided code, and upload it to your Arduino board.
3. **Observe the LED**: The LED will gradually increase its brightness in 16 steps, creating a smooth brightness transition effect.

## Conclusion

This sketch demonstrates how to control the brightness of an LED using PWM (Pulse Width Modulation) on an Arduino. By adjusting the delay and brightness levels, you can create various lighting effects. This basic concept can be expanded for more complex projects, such as LED matrices or mood lighting systems.
