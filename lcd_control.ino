#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
    Serial.begin(9600);
    lcd.begin(16,2);
}

void loop() {
    int vr;
    vr=analogRead(A0);
    Serial.println(vr);
    delay(500);
    lcd.setCursor(0,0);
    lcd.print("this is my heart");
    lcd.setCursor(5,1);
    if(vr<10) {lcd.print("   "); lcd.print(vr);}
    else if(vr<100) {lcd.print("  "); lcd.print(vr);}
    else if(vr<1000){lcd.print(" "); lcd.print(vr);}
    else {lcd.print("  ");lcd.print("I LOVE YOU");}
    
    /*
    lcd.setCursor(0,0);
    lcd.print(vr);
    lcd.setCursor(5,0);
    lcd.print(vr,OCT);
    lcd.setCursor(0,1);
    lcd.print(vr,BIN);
    lcd.setCursor(5,1);
    lcd.print(vr,HEX);
  */
}
