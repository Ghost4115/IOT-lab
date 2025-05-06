/* Title: Create a program that illuminates the green LED if the counter is less than 100,
   illuminates the yellow LED if the counter is between 100 and 200 (inclusive),
   and illuminates the red LED if the counter is greater than 200.
   Name: Manav Uttekar
   Roll No: 71
*/

int counter = 0;

void setup() {
  pinMode(13, OUTPUT); // Green
  pinMode(12, OUTPUT); // Yellow
  pinMode(11, OUTPUT); // Red

  Serial.begin(9600); // Start Serial Monitor
}

void loop() {
  Serial.print("Counter: ");
  Serial.println(counter); // Show the current value of counter

  if (counter < 100) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  } else if (counter <= 200) {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }

  counter++;
  if (counter > 300) {
    counter = 0;
  }

  delay(100); // Slow down so you can see the changes
}
