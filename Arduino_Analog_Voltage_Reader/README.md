
```markdown
# Arduino Analog Voltage Reader

This project reads an analog voltage input from a sensor connected to an Arduino and outputs the converted voltage value to the Serial Monitor.

## Components

- **Arduino Board** (e.g., Arduino Uno)
- **Analog Sensor** (e.g., potentiometer or any other analog sensor)
- **Jumper Wires**

## Circuit Diagram

Here is the connection diagram to set up the circuit:

```
                      +-------------------+
                      |                   |
        +5V   --------| VCC           OUT |-------- A6 (Analog Input on Arduino)
                      |                   |
       GND   ---------| GND               |
                      +-------------------+

                            SENSOR
                             (e.g., Potentiometer)


                          +---------------------------+
                          |                           |
                          |        Arduino            |
                          |                           |
     +5V    --------------| 5V                        |
     GND    --------------| GND                       |
                          |                           |
        A6  --------------| A6 (Analog Input)         |
                          |                           |
                          +---------------------------+
```

### Connections:

1. **Sensor (e.g., Potentiometer):**
   - **VCC**: Connect to the 5V pin on the Arduino.
   - **GND**: Connect to one of the GND pins on the Arduino.
   - **OUT**: Connect to the A6 analog input pin on the Arduino.

2. **Arduino:**
   - **5V Pin**: Supplies power to the sensor.
   - **GND Pin**: Completes the circuit with the sensor's ground.
   - **A6 Pin**: Reads the analog output from the sensor.

## Code Explanation

The following Arduino code reads the analog voltage from the sensor and outputs the corresponding voltage value to the Serial Monitor.

```cpp
int VoultPin = A6;  // Define the analog input pin (A6) to measure voltage.
int ReadVal;        // Variable to store the raw analog reading.
float V2;           // Variable to store the converted voltage value.

void setup() {
  // Initialize serial communication at a baud rate of 9600.
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the defined pin (range: 0-1023).
  ReadVal = analogRead(VoultPin);
  
  // Convert the raw analog reading to a voltage (0 to 5V).
  // 5V is the reference voltage, and 1023 is the maximum analog read value.
  V2 = (5.0 / 1023.0) * ReadVal;
  
  // Output the converted voltage value to the Serial Monitor.
  Serial.println(V2);
  
  // Wait for 250 milliseconds before repeating the loop.
  delay(250);
}
```

### Code Breakdown

- **VoultPin**: The pin where the analog sensor is connected (A6 in this case).
- **ReadVal**: Stores the raw analog value read from the sensor (ranging from 0 to 1023).
- **V2**: Stores the converted voltage value calculated from the raw reading.

### How It Works

1. The code begins by setting up serial communication at a baud rate of 9600.
2. In the `loop()` function, the analog value is read from pin A6.
3. This raw value is then converted into a voltage between 0 and 5V using the formula: `V2 = (5.0 / 1023.0) * ReadVal;`.
4. The voltage is printed to the Serial Monitor, allowing you to see the real-time voltage output.
5. The loop repeats every 250 milliseconds.

## Usage

1. Connect the circuit as described in the **Circuit Diagram** section.
2. Upload the code to the Arduino using the Arduino IDE.
3. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
4. Adjust the sensor and observe the corresponding voltage values displayed in the Serial Monitor.

## License

This project is open-source and available under the MIT License.
