#include<AT89X51.h>
//#include "LiquidCrystal.h"
    LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
    
    int Spoil = 9;
    int Formalin = 8;
    int redLed = 7;
    int greenLed = 6;
    
    void setup()
    {
      pinMode(Spoil, INPUT);
      pinMode(Formalin, INPUT);
    }
    
    void loop()
    {
      if(digitalRead(Spoil) == HIGH)
      {
        lcd.setCursor(0,0);
        lcd.print("Food Spoiled");
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
        
      }
      if(digitalRead(Formalin) == HIGH)
      {
        lcd.setCursor(0,0);
        lcd.print("Formalin Detected");
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
        
      }
      else
      {
        lcd.setCursor(0,0);
        lcd.print("Nothing Detected");
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
      }
      //delay(500);
      lcd.clear();
    }