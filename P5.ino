/*Title: Write a program to control the color of the LED by turning 3 different potentiometers. 
  One will be read for the value of Red, one for the value of Green, and one for the value of Blue.
  Name:- Manav Uttekar
  Roll No:- 71
*/

void setup() {
    // put your setup code here, to run once:
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(A2, INPUT);
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
    int redvalue = analogRead(A0);
    int greenvalue = analogRead(A1);
    int bluevalue = analogRead(A2);
  
    analogWrite(8, redvalue);
    analogWrite(9, greenvalue);
    analogWrite(10, bluevalue);
  }
  