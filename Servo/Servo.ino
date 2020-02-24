


#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver (0x40, Wire);

#define SERVO_FREQ 60

void setup() {
pwm.begin();
pwm.setOscillatorFrequency(27000000);
pwm.setPWMFreq(SERVO_FREQ);
pwm.writeMicroseconds(0, 1500);
//delay(20000);
}

void loop() {
pwm.writeMicroseconds(0,1900);
delay(3000);
pwm.writeMicroseconds(0,1100);
delay(3000);
}
