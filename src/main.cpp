#include <Arduino.h>
#include <Stepper.h>

const int stepsPerRevolution = 2038;
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  
  // Rotate CW slowly at 5 RPM
	myStepper.setSpeed(5);
	myStepper.step(stepsPerRevolution);
	delay(1000);
	
	// Rotate CCW quickly at 10 RPM
	myStepper.setSpeed(15);
	myStepper.step(-stepsPerRevolution);
	delay(1000);
}
