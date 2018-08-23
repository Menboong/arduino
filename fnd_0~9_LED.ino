int a,b;
int p;
int fnddata[10][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,1,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
void setup() {
  for(p=6;p<=13;p++)
  {
    pinMode(p,OUTPUT);
  }
}

void loop() {
  for(a=0;a<10;a++)
  {
    digitalWrite(13,1);
    delay(500);
    for(b=0;b<=6;b++)
    {
      digitalWrite(b+6,fnddata[a][b]);
    }
    digitalWrite(13,0);
    delay(500);
  }
}

 
/*digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
digitalWrite(dot,1);
delay(500);
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,1);
digitalWrite(dot,0);
delay(500);



}*/
