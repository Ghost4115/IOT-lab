/*
  Title: Read the temperature sensor and send the values to the serial monitor.
  Name:- Manav Uttekar
  Roll No:- 71
*/

void setup() {
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  int rawValue = analogRead(A1);                      // Read raw analog value
  float voltage = rawValue * (5.0 / 1023.0);          // Convert to voltage
  float temperatureC = voltage * 100;                 // Convert voltage to Celsius

  Serial.print("Temperature (°C): ");
  Serial.println(temperatureC);

  delay(1000); // Read every 1 second
}
