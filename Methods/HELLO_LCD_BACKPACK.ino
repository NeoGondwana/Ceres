#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <OneWire.h> 
#include <DallasTemperature.h>
/********************************************************************/
// Data wire is plugged into pin 2 on the Arduino 
#define ONE_WIRE_BUS 2 
/********************************************************************/
// Setup a oneWire instance to communicate with any OneWire devices  
// (not just Maxim/Dallas temperature ICs) 
OneWire oneWire(ONE_WIRE_BUS); 
/********************************************************************/
// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7);  // Set the LCD I2C address

void setup()
{
  lcd.begin (16,2); // for 16 x 2 LCD module
  lcd.setBacklightPin(3,POSITIVE);
  lcd.setBacklight(HIGH);
  
  lcd.home ();  // go home
   
          // go to the next line
     
}

void loop()
{
   lcd.clear();
   lcd.setCursor ( 0, 1 );
  sensors.requestTemperatures();
   lcd.print("Yo Farty"); 
   
   delay(1000);
   lcd.clear();
 // lcd.scrollDisplayLeft();
 // delay(200);
  //-----------------------

 // lcd.noDisplay();
 // delay(200);
 // lcd.display();
  //delay(200);
  //-------------------------
 // lcd.clear();
  //lcd.setCursor(0,1); // column,row starts at 0
  //lcd.setCursor(0,5);
  //lcd.print("HAI..");
  //delay(200);
  
  

}
