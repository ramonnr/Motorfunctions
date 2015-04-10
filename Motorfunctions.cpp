// Do not remove the include below
#include "Motorfunctions.h"

#define dir 2
#define pwm 3


//The setup function is called once at startup of the sketch
void setup()
{
//pinMode(enable, OUTPUT);
pinMode(dir,OUTPUT);
pinMode(pwm,OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{

//	for(int i=40; i<255; i+=20){
//	digitalWrite(dir,HIGH);
//	delay(100);
//	analogWrite(pwm,i);
//	delay(700);
//	analogWrite(pwm,0);
//delay(2000);
//	digitalWrite(dir,LOW);
//	delay(100);
//	analogWrite(pwm,i);
//	delay(700);
//	analogWrite(pwm,0);
//	delay(2000);
//	}
//	analogWrite(pwm,0);
//	delay(100000000);
	digitalWrite(dir,HIGH);
	analogWrite(pwm,255);
	delay(2000);
	analogWrite(pwm,0);
		delay(200000000);

}
