int R = 9;
int G = 10;
int B = 11;

int X = A4;
int Y = A3;
int S = 5;

int x,y,s,z;
void setup() {
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);

pinMode(X,INPUT);
pinMode(Y,INPUT);
pinMode(S,INPUT);
digitalWrite(S,HIGH);

Serial.begin(9600);
}

void loop() {
x = map(analogRead(X),0,1023,0,255);
y = map(analogRead(Y),0,1023,0,255);
s = digitalRead(S);
z = map((x+y)/2,0,1023,0,255);
Serial.print(x);
Serial.print("  ");
Serial.print(y);
Serial.print("  ");
Serial.println(z);
//delay(2000);
if(s == 1)
{
digitalWrite(R,x);
digitalWrite(G,y);
digitalWrite(B,z);
Serial.println(s);
}
else
{
  digitalWrite(R,0);
  digitalWrite(G,0);
  digitalWrite(B,0);
}
}
