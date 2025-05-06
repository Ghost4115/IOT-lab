/* Title: Create a program that illuminates the green LED if the counter is less than 100,
   illuminates the yellow LED if the counter is between 100 and 200 (inclusive),
   and illuminates the red LED if the counter is greater than 200.
   Name: Manav Uttekar
   Roll No: 71
*/

int counter = 0;

void setup() {
  // Initialize LED pins as output
  pinMode(13, OUTPUT); // Green
  pinMode(12, OUTPUT); // Yellow
  pinMode(11, OUTPUT); // Red
}

void loop() {
  // Check counter and light up corresponding LED
  if (counter < 100) {
    digitalWrite(13, HIGH); // Green ON
    digitalWrite(12, LOW);  // Yellow OFF
    digitalWrite(11, LOW);  // Red OFF
  } else if (counter <= 200) {  // Includes counter == 100
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  } else { // counter > 200
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }

  // Simulate counter increment
  counter++;
  if (counter > 300) {
    counter = 0; // Reset for simulation loop
  }

  delay(100); // Delay to slow down LED changes
}
