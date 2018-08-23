int val;
int flag=0;
void setup() {
 pinMode(13,OUTPUT);

}

void loop() {
  while(1){
 val = analogRead(A0);
 if(digitalRead(13) == 0)
 {
  delay(30);
  if(flag == 0)
  {
    if(val>=300)
    {
      digitalWrite(13,1);
      continue;
    }
  digitalWrite(13,1);
  flag = 1;
  }
  else
  {
    digitalWrite(13,0);
    flag = 0;
  }
  while(digitalRead(13)==0);
  delay(30);
 }
  }
}
