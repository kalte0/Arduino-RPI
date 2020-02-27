#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <Adafruit_GFX.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver (0x40, Wire);
Adafruit_7segment matrix = Adafruit_7segment(); 

#define SERVO_FREQ 60

int state; 

void setup() {
//pwm.begin();
//pwm.setOscillatorFrequency(27000000);
//pwm.setPWMFreq(SERVO_FREQ);
//pwm.writeMicroseconds(0, 1500);
//delay(20000);
Serial.begin(9600); 
}

void loop() {

switch (state) {
	case: 0 
break; 
	case:1
	
break;
}
}
