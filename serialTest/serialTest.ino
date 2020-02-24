#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>

Adafruit_7segment matrix = Adafruit_7segment(); 

String inString = "";

void setup() {
Serial.begin(9600); 
matrix.begin(0x70); 
matrix.print(0,DEC);
matrix.writeDisplay(); 

}

void loop() {
/*   if (Serial.available()) {
		int inChar = Serial.read(); 
		if (isDigit(inChar)) {
			inString += (char)inChar; 
		}
		if (inChar == '\n') {
			matrix.print(inString.toInt(), DEC); 
			matrix.writeDisplay(); 
			inString = "";

		}
	}
*/	
}
