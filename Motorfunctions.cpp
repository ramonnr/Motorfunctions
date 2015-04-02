// Do not remove the include below
#include "Motorfunctions.h"


//The setup function is called once at startup of the sketch
void setup()
{
Serial.begin(9600);
pinMode(13, OUTPUT);

}

// The loop function is called in an endless loop
void loop()
{
Serial.print("this is stuff");
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(100);
//här händer det grejor
//this is a comment by R
//Mickes commit
//motherfucking commits
}
