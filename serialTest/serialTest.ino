#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>
#include <Servo.h>	

Adafruit_7segment matrix = Adafruit_7segment(); 
Servo myservo; 

void setup() {
Serial.begin(9600); 

matrix.begin(0x70); 
matrix.print(0,DEC);
matrix.writeDisplay(); 

myservo.attach(9); 
}

void loop() {
       if (Serial.available()) {
		int inChar = Serial.read(); 
		if (inChar == 0) {
			matrix.print(0, DEC);
			matrix.writeDisplay(); 
			myservo.write(1500);
		}
		else if (inChar == 1) {
			matrix.print(1, DEC); 
			matrix.writeDisplay(); 	 
			myservo.write(1900); 
		}
/*	
		if (isDigit(inChar)) {
			inString += (char)inChar; 
		}
		if (inChar == '\n') {
			matrix.print(inString.toInt(), DEC); 
			matrix.writeDisplay(); 
			inString = "";

		} */ 
	}
}
