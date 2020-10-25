//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x20 for a 16 chars and 2 line display

int currentPin = A3;
int coulombPin = 3;

void setup()
{
  lcd.init();                      // initialize the lcd

  pinMode(currentPin, INPUT);
  pinMode(coulombPin, INPUT);

}

void loop()
{

  lcd.setCursor(0,0); // Sets the cursor to col 0 and row 0
  lcd.print("SensorVal1: "); // Prints Sensor Val: to LCD
  lcd.print(analogRead(currentPin)); // Prints value on Potpin1 to LCD
  lcd.setCursor(0,1); // Sets the cursor to col 1 and row 0
  lcd.print("SensorVal2: "); // Prints Sensor Val: to LCD
  lcd.print(digitalRead(coulombPin)); // Prints value on Potpin1 to LCD
}
