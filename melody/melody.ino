void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  int sen;
  sen=analogRead(A0);
  if(sen>550) 
  {
    Serial.println("밝음");
    digitalWrite(8,0);
  }
  else 
  {
    Serial.println("어두움");
    digitalWrite(8,1);
    tone(7,3000,250);
    delay(325);
  }
  delay(200);

}
