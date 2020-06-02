#include<LiquidCrystal.h>
LiquidCrystal lcd (12,11,2,3,4,5);  //RS-register select, EN- Enable, others are data pins
void setup() {

  lcd.begin(16,2); //no char ,no of rows
  lcd.clear();
  lcd.print("Hello world");

}

void loop() {
  int counter= millis()/1000;   //to displat the seconds in lcd screen
  lcd.setCursor(0,1);          //first coloumn , 2nd row
  lcd.print(counter);
 
}
