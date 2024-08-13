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