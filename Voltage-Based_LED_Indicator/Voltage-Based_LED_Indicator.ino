// Pin connected to the voltage input (A6 corresponds to analog pin 6)
int VoltPin = A6;  

// Variable to store the raw analog reading
int ReadVal;        

// Variable to store the converted voltage value
float V2;     

// Pins connected to LEDs
int ledPin7 = 7;      
int ledPin5 = 5;

// Pause time between LED blinks in milliseconds
int pauseT = 250;

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set LED pins as output
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {
  // Read the analog value from the voltage input pin
  ReadVal = analogRead(VoltPin);

  // Convert the raw analog value to a voltage (assuming a 5V reference)
  V2 = (5.0 / 1023.0) * ReadVal; 

  // If the voltage is approximately 5V or 1V, blink the LED on pin 7
  if ((V2 == 5) || (V2 == 1)) {
    digitalWrite(ledPin7, HIGH);
    delay(pauseT); // Pause with LED on
    digitalWrite(ledPin7, LOW);
    delay(pauseT); // Pause with LED off

  // If the voltage is approximately 4V or 2V, blink the LED on pin 5
  } else if ((V2 == 4) || (V2 == 2)) {
    digitalWrite(ledPin5, HIGH);
    delay(pauseT); // Pause with LED on
    digitalWrite(ledPin5, LOW);
    delay(pauseT); // Pause with LED off

  // If the voltage is not 5V, 4V, 2V, or 1V, turn off both LEDs
  } else {
    digitalWrite(ledPin7, LOW); 
    digitalWrite(ledPin5, LOW); 
  }

  // Print the calculated voltage to the Serial Monitor
  Serial.println(V2);
  delay(pauseT); // Pause before the next loop iteration
}