int IR=A0;

void setup() {
  Serial.begin(9600);
  pinMode(IR, INPUT);
}

void loop() {
  int volt=map(analogRead(IR),0,1023,0,5000); //0~1023의 analog 값을 0~5v 사이의 전압 값으로 메핑(메핑은 값을 맞추어 주는것(=비율을 맞추는것))
  int distance =(27.61 / (volt - 0.1696))*1000; //전압을 기준으로 거리계산

  Serial.print("Distance: ");
  Serial.println(distance);
}
