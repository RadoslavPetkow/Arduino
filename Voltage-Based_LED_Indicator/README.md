# Voltage-Based LED Indicator

## Overview

The **Voltage-Based LED Indicator** is an Arduino-based project that reads the voltage from a potentiometer and lights up LEDs based on specific voltage thresholds. This project is designed to help you visually indicate the position of the potentiometer's knob by lighting up LEDs according to the voltage level it produces.

## Features

- **Voltage Monitoring:** Continuously reads the voltage output from a potentiometer connected to an analog pin.
- **LED Indication:** Lights up an LED based on whether the voltage from the potentiometer is approximately 1V, 2V, 4V, or 5V.
- **Serial Output:** Outputs the measured voltage to the Serial Monitor for easy debugging and monitoring.
- **Customizable:** The voltage thresholds, pause times, and LED pins can be easily adjusted in the code.

## Components

- Arduino board (e.g., Arduino Uno)
- Potentiometer (e.g., 10k ohm)
- Two LEDs
- Two resistors (appropriate value for LEDs, typically 220Ω or 330Ω)
- Breadboard and jumper wires
- Power source for the Arduino

## Setup Instructions

1. **Circuit Setup:**
   - **Potentiometer:**
     - Connect the middle pin of the potentiometer to analog pin A6 on the Arduino.
     - Connect one of the outer pins of the potentiometer to the 5V pin on the Arduino.
     - Connect the other outer pin of the potentiometer to the ground (GND) of the Arduino.
   - **LEDs:**
     - Connect one LED to pin 7 of the Arduino through a resistor.
     - Connect the other LED to pin 5 of the Arduino through a resistor.
     - Ensure the ground (GND) pin of the Arduino is connected to the ground rail on the breadboard, and all components share the common ground.

2. **Arduino Code:**
   - Open the Arduino IDE.
   - Copy and paste the code from the `Voltage_Based_LED_Indicator.ino` file into the Arduino IDE.
   - Connect your Arduino board to your computer.
   - Select the correct board and port from the Arduino IDE.
   - Upload the code to your Arduino board.

3. **Operation:**
   - Once the code is uploaded, the Arduino will start monitoring the voltage output from the potentiometer on analog pin A6.
   - The LEDs will blink based on the voltage level:
     - LED on pin 7 blinks if the voltage is approximately 1V or 5V.
     - LED on pin 5 blinks if the voltage is approximately 2V or 4V.
   - The measured voltage will be printed to the Serial Monitor.
   - Rotate the potentiometer knob to change the voltage and observe how the LEDs respond.

## Customization

- **Changing Voltage Thresholds:**
  - Modify the conditions in the `if` and `else if` statements within the `loop()` function to change the voltage thresholds that trigger the LEDs.

- **Changing LED Pins:**
  - Update the `ledPin7` and `ledPin5` variables to use different digital pins for the LEDs.

- **Adjusting Pause Time:**
  - Modify the `pauseT` variable to change the delay time between LED blinks.

## Code Overview

This project reads the voltage from a potentiometer, converts it to a corresponding voltage value, and uses that value to control the behavior of two LEDs. The code is structured to make it easy to adjust parameters like voltage thresholds, LED pins, and blink timings.

## License

This project is open-source and available under the MIT License. Feel free to modify and distribute it as you like.
