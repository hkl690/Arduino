/*
  Arduino Starter Kit example
  Project 9 - Motorized Pinwheel

  This sketch is written to accompany Project 9 in the Arduino Starter Kit

  Parts required:
  - 10 kilohm resistor
  - pushbutton
  - motor
  - 9V battery
  - IRF520 MOSFET
  - 1N4007 diode

  created 13 Sep 2012
  by Scott Fitzgerald
  modified by Jina Wilde

  http://www.arduino.cc/starterKit
*/

// named constants for the switch and motor pins
const int switchPin = 2; // the number of the switch pin
const int motorPin =  9; // the number of the motor pin

int switchState = 0;  // variable for reading the switch's status
bool pressed = false;

void setup() {
  // initialize the motor pin as an output:
  pinMode(motorPin, OUTPUT);
  // initialize the switch pin as an input:
  pinMode(switchPin, INPUT);
}

void loop() {
  // read the state of the switch value:
  switchState = digitalRead(switchPin);
/*
  // check if the switch is pressed.
  if (switchState == HIGH) {
    // turn motor on:
    digitalWrite(motorPin, HIGH);
  } else {
    // turn motor off:
    digitalWrite(motorPin, LOW);
  }*/
///*

 // */
if(switchState == HIGH && pressed == false){
  pressed = true;
  digitalWrite(motorPin, HIGH);

  } else if(switchState == HIGH && pressed == true){
  pressed = false;
  digitalWrite(motorPin, LOW);

  }/*
  else if(switchState == LOW && on == true)
  digitalWrite(motorPin, HIGH);
else if(switchState == LOW && on == false)
  digitalWrite(motorPin, LOW);
    */
}
