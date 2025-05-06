/*Title: Create a program so that when the user enters "b" the green light blinks, 
  "g" the green light is illuminated, "y" the yellow light is illuminated and 
  "r" the red light is illuminated.
  Name:- Manav Uttekar
  Roll No:- 71
*/

void setup() {
    // put your setup code here, to run once:
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    Serial.begin(9600);
    Serial.println("Enter 'b' for blinking green, 'g' for green, 'y' for yellow, 'r' for red.");
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
    if (Serial.available() > 0) {
      char input = Serial.read();
      
      if (input == 'b') {
        for (int i = 0; i < 5; i++) {
          digitalWrite(13, HIGH);
          delay(500);
          digitalWrite(13, LOW);
          delay(500);
          Serial.println("Green light blinking...");
        }
      } else if (input == 'g') {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        Serial.println("Green light ON");
      } else if (input == 'y') {
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(11, LOW);
        Serial.println("Yellow light ON");
      } else if (input == 'r') {
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
        Serial.println("Red light ON");
      } else if (input == '\n') {
        Serial.println("Enter Next Input");
      } else {
        Serial.println("Invalid input! Please enter 'b', 'g', 'y', or 'r'.");
      }
    }
  }
  