// Do not remove the include below
#include "Motorfunctions.h"
#include "Servo.h"

#define dir 2
#define pwm 10
char inputArray[2];
uint8_t angle;
Servo servo;


//The setup function is called once at startup of the sketch
void setup()
{
	//pinMode(enable, OUTPUT);
	pinMode(dir,OUTPUT);
	//pinMode(pwm,OUTPUT);
	pinMode(13, OUTPUT);
	Serial.begin(9600);
	Serial.println("Initializing! New");
servo.attach(11);
	servo.write(70);
	delay(300);
	servo.write(90);
	delay(300);
	servo.write(110);
	delay(1000);
	servo.write(90);
	delay(1000);


}


// The loop function is called in an endless loop
void loop()
{

	if(Serial.available()>0){
		Serial.readBytes(inputArray,2);

		angle= (inputArray[1]);
		servo.write(angle);
		Serial.end();
		Serial.begin(9600);

	}



	//	for(int i=40; i<255; i+=20){
	//	digitalWrite(dir,HIGH);
	//	delay(100);
	//	servo.write(pwm,i);
	//	delay(700);
	//	servo.write(pwm,0);
	//delay(2000);
	//	digitalWrite(dir,LOW);
	//	delay(100);
	//	servo.write(pwm,i);
	//	delay(700);
	//	servo.write(pwm,0);
	//	delay(2000);
	//	}
	//	servo.write(pwm,0);
	//	delay(100000000);
	//	digitalWrite(dir,HIGH);
	//	servo.write(pwm,255);
	//	delay(2000);
	//	servo.write(pwm,0);
	//		delay(200000000);
}

