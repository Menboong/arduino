#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
lcd.begin(16,2);
}

void loop() {
int sec=0;
int mit=0;
int hr=0;
char p[10];
lcd.setCursor(5,0);
lcd.print("watch");
while(1){
sec++;
if(sec==60)
{
  sec=0; 
  mit++;
  if(mit==60) 
{
 mit=0;
 hr++;
if(hr==24) hr=0;
}
}
sprintf(p,  "%02d:%02d:%02d",hr,mit,sec);
lcd.setCursor(3,1);
lcd.print(p);
delay(10);
}
}
