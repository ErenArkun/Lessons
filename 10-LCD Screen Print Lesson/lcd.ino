#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
    lcd.begin(16, 2);
}

void loop(){
    lcd.setCursor(1,0);
    lcd.print("LCD Ekran");
    lcd.setCursor(1,1);
    lcd.print("Yazi");
}