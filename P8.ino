/* Title: Write a program to show the temperature and shows a graph of the recent measurements.
   Name:- Manav Uttekar
   Roll No:- 71
*/

float temperatureC;
float temperatureF;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(A0); // Read the thermistor value
  float resistance = 10000.0 * (1453.0 / a - 1); // Calculate the resistance
  temperatureC = 1.0 / (log(resistance / 10000.0) / 3950 + 1.0 / 298.15) - 273.15; // Celsius

  // Convert to Fahrenheit
  temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  // Send temperature data to Serial Plotter
  Serial.print("TempC: ");
  Serial.print(temperatureC);
  Serial.print("\t");
  Serial.print("TempF: ");
  Serial.println(temperatureF);

  delay(1000); // Update every second
}
