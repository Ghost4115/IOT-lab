/*Title: Write a program read the temperature sensor and send the values to the serial monitor on the computer.
  Name:- Manav Uttekar
  Roll No:- 71
*/

void setup() {
    // put your setup code here, to run once:
    pinMode(A1, INPUT);
    Serial.begin(9600);
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
    float t = analogRead(A1);
    Serial.print("temperature record is ");
    Serial.println(t);
  }
  