#include <Servo.h>
Servo s1;
void setup() {
  s1.attach(9);
}

void loop() {
  s1.write(0);
  delay(300);
  s1.write(90);
  delay(300);
  s1.write(180);
  delay(300);
}
