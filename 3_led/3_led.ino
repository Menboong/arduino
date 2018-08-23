void setup() {
  Serial.begin(9600);
}

void loop() {
  int vr;
  vr=analogRead(A0);
  
  Serial.println(vr);
  
  analogWrite(6,map(vr,0,1023,0,255));
  analogWrite(5,50);
  analogWrite(3,0);
  delay(500);
  
}
