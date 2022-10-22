/*
  Arduino Starter Kit example
  Project 11 - Crystal Ball

  This sketch is written to accompany Project 11 in the Arduino Starter Kit

  Parts required:
  - 220 ohm resistor
  - 10 kilohm resistor
  - 10 kilohm potentiometer
  - 16x2 LCD screen
  - tilt switch

  created 13 Sep 2012
  by Scott Fitzgerald
  modified by Jina Wilde

  http://www.arduino.cc/starterKit

  This example code is part of the public domain.
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


// named constant for the pin the sensor is connected to
const int sensorPin = A0;


void setup() {
  // set up the number of columns and rows on the LCD
  lcd.begin(16, 2);
}

void loop() {
// read the value on AnalogIn pin 0 and store it in a variable
  int sensorVal = analogRead(sensorPin);
  // convert the ADC reading to voltage
  float voltage = (sensorVal / 1024.0) * 5000;
  
  float cel = voltage/ 100;

float farh = (cel*9)/5 + 32;
 
lcd.print("TEMPERATURE = ");
// move the cursor to the second line
lcd.setCursor(0, 1);

lcd.print(cel);

lcd.setCursor(5,1);
lcd.print(" C");

lcd.setCursor(8, 1);
lcd.print(farh);
lcd.setCursor(13,1);
lcd.print(" F");
delay (1000);
lcd.clear();

}
  
 
