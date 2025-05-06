/*Title: Write a program that asks the user for a number and outputs the number squared that is entered.
  Name:- Manav Uttekar
  Roll No:- 71
*/

void setup() {
    // Start the serial communication
    Serial.begin(9600);
  
    // Print a message to the Serial Monitor
    Serial.println("Enter a number:");
  }
  
  void loop() {
    // Check if data is available to read from the serial monitor
    if (Serial.available() > 0) {
      // Read the number entered by the user
      long number = Serial.parseFloat();
  
      // If the input is valid, square the number and print the result
      if (number != 0) {
        long squared = number * number;
        Serial.print("The square of ");
        Serial.print(number);
        Serial.print(" is ");
        Serial.println(squared);
      }
  
      // Prompt again for a new number
      Serial.println("Enter another number:");
    }
  }
  
