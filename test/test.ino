#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("My name is:");
  lcd.setCursor(0, 1);
  lcd.print("Art");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(50);
}
