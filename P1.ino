/*Title: Write a program using Arduino to control LED (One or more ON/OFF). Or Blinking
Name:- Manav Uttekar
Roll No:- 71*/

void setup()
{
    // put your setup code here, to run once:
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(1000);

    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    delay(1000);

    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(1000);
}
