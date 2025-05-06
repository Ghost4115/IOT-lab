/*Title: Write a program so it displays the temperature in Fahrenheit as well as the maximum and minimum temperatures it has seen.
  Name:- Manav Uttekar
  Roll No:- 71
*/

float temperatureC, temperatureF;
float maxTemp = -1000; // Start with a very low value
float minTemp = 1000;  // Start with a very high value

void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(A0); // Read the thermistor value
  float resistance = 10000.0 * (1453.0 / a - 1); // Calculate the resistance
  temperatureC = 1.0 / (log(resistance / 10000.0) / 3950 + 1.0 / 298.15) - 273.15; // Calculate temperature in Celsius

  // Convert to Fahrenheit
  temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  // Update max and min temperatures
  if (temperatureC > maxTemp) {
    maxTemp = temperatureC;
  }
  if (temperatureC < minTemp) {
    minTemp = temperatureC;
  }

  // Print the results
  Serial.print("Current Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C, ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  Serial.print("Max Temperature: ");
  Serial.print(maxTemp);
  Serial.print(" °C, ");
  Serial.print((maxTemp * 9.0 / 5.0) + 32.0);
  Serial.println(" °F");

  Serial.print("Min Temperature: ");
  Serial.print(minTemp);
  Serial.print(" °C, ");
  Serial.print((minTemp * 9.0 / 5.0) + 32.0);
  Serial.println(" °F");

  delay(1000); // Update every second
}
