#include<Servo.h>
Servo myservo0;
Servo myservo1;

void setup() {
Serial.begin(9600);
pinMode(2,INPUT_PULLUP);
pinMode(8,OUTPUT);
myservo0.attach(3);
myservo1.attach(4);
}

void loop() {
int va0,va1;
va0=analogRead(A0);
va1=analogRead(A1);

Serial.print("va0: ");
Serial.println(va0);
Serial.print("==> ");
Serial.println(map(va0,0,1023,0,180));

Serial.print("va1: ");
Serial.println(va1);
Serial.print("==> ");
Serial.println(map(va1,0,1023,0,180));

delay(500);

if (digitalRead(2) == LOW) digitalW5rite(8, HIGH);
else digitalWrite(8,LOW);

myservo0.write(va0);
myservo1.write(va1);
}
