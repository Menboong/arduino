#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 9   
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(t) || isnan(h)) {              //  returns 1 if "not a number“
      Serial.println("Failed to read from DHT");
    }
  else {
    Serial.print("Temp=");
    Serial.print(t);
    Serial.println(" *C");
    Serial.print("Humidity=");
    Serial.print(h);
    Serial.println("% ");
    delay(500);
  }
}
