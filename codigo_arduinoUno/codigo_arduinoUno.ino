// Define the TDS sensor pin
int tdsPin = A0;

void setup() {
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the TDS sensor pin
  int analogValue = analogRead(tdsPin);

  // Convert the analog value to TDS value using the formula:
  // TDS = (analogValue / 1024) * 5000 / 9.6
  float tdsValue = (analogValue / 1024.0) * 5000.0 / 9.6;

  // Print the TDS value to the serial monitor
  Serial.print("TDS value: ");
  Serial.println(tdsValue);

  // Wait for 1 second before taking the next reading
  delay(1000);
}