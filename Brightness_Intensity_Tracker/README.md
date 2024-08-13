# Arduino Program

## Overview

This Arduino sketch prints a message to the Serial Monitor, indicating the brightness level of a light and its corresponding intensity. The brightness starts at 1 and increments by 1 with each iteration of the loop. The intensity is calculated as 10 times the brightness. The program runs indefinitely, updating the brightness and intensity values every second.

## Features

- **Brightness Calculation:** The brightness level starts at 1 and increases by 1 with each loop iteration.
- **Intensity Calculation:** The intensity is computed as 10 times the brightness.
- **Serial Output:** The program prints the brightness and intensity values to the Serial Monitor in the format: `A Light With Brightness X.00 Has an Intensity of Y.00.` where `X` is the brightness and `Y` is the calculated intensity.

## Components

- **Arduino Board**: Any board with a serial communication capability.
- **USB Cable**: To connect the Arduino board to a computer for uploading the code and monitoring serial output.

## Code Explanation

### Variables

- `String mes1`: Holds the first part of the message ("A Light With Brightness ").
- `String mes2`: Holds the second part of the message (" Has an Intensity of ").
- `String mes3`: Holds the period at the end of the message (" .").
- `int bright`: Stores the current brightness level, initialized to 1.
- `int pause`: The delay between each loop iteration, set to 1000 milliseconds (1 second).
- `int x`: Stores the calculated intensity.

### Setup Function

The `setup()` function is called once when the program starts. Here, the Serial communication is initialized with a baud rate of 9600.

### Loop Function

The `loop()` function runs repeatedly:

1. **Intensity Calculation:** The intensity `x` is calculated by multiplying the brightness `bright` by 10.
2. **Serial Output:** The message is constructed using the strings and variables, and printed to the Serial Monitor.
3. **Delay:** The program waits for 1 second before the next iteration.
4. **Brightness Update:** The brightness is incremented by 1.

### Example Output

If the initial brightness is 1, the output will look like this:

```
A Light With Brightness 1 Has an Intensity of 10.
A Light With Brightness 2 Has an Intensity of 20.
A Light With Brightness 3 Has an Intensity of 30.
...
```

This output will continue indefinitely, with the brightness and intensity values increasing by 1 and 10, respectively, with each second.

## How to Use

1. **Upload the Code**: Upload the sketch to your Arduino board using the Arduino IDE.
2. **Open Serial Monitor**: After uploading, open the Serial Monitor from the Arduino IDE (Ctrl + Shift + M).
3. **Observe the Output**: The Serial Monitor will display the brightness and intensity values updating every second.

## Customization

- **Change Brightness Increment**: Modify the `bright = bright + 1;` line in the `loop()` function to change how the brightness increments (e.g., `bright += 2;` to increase by 2).
- **Change Delay**: Adjust the `pause` variable to change how frequently the values update.

## Troubleshooting

- **No Output in Serial Monitor**: Ensure the baud rate of the Serial Monitor matches the `Serial.begin(9600);` statement.
- **Unexpected Values**: Double-check the calculations and variable updates in the `loop()` function.

## Conclusion

This program demonstrates a simple way to calculate and display the intensity of a light based on its brightness using an Arduino. It is a useful example for learning basic serial communication and looping in Arduino sketches.

## License

This project is open-source and available for modification and redistribution under the MIT License.
