/* 
Name: Manav Uttekar
Roll No: 71
Title: Understand the connectivity of Raspberry Pi / Arduino / BeagleBone with IR sensor
*/

int irSensorPin = 2; // Connect OUT pin of IR sensor to digital pin 2
int irValue;         // To store the sensor value

void setup() {
  pinMode(irSensorPin, INPUT);  // Set pin as input
  Serial.begin(9600);           // Initialize serial communication
}

void loop() {
  irValue = digitalRead(irSensorPin);  // Read the sensor

  if (irValue == LOW) {
    Serial.println("Object Detected");
  } else {
    Serial.println("No Object");
  }

  delay(500); // Small delay for stability
}
