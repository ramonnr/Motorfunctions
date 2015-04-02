// Do not remove the include below
#include "Motorfunctions.h"

#define enable 9
#define dir1 7
#define dir2 8


//The setup function is called once at startup of the sketch
void setup()
{
pinMode(enable, OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{

	digitalWrite(dir1,LOW);
	digitalWrite(dir2,HIGH);
	analogWrite(enable,255);
	delay(1000);
	analogWrite(enable,0);
	digitalWrite(dir2,LOW);
	digitalWrite(dir1,HIGH);
	delay(500);
	analogWrite(enable,255);
	delay(1000);
	analogWrite(enable,0);
	delay(500);


}
