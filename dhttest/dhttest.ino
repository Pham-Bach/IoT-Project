#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

int fan = 9;
int speaker = 10;
void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  pinMode(fan, OUTPUT);
  pinMode(speaker, OUTPUT);

  digitalWrite(fan, LOW);
  digitalWrite(speaker, LOW);
  dht.begin();
}

void loop() {
  delay(2000);
  
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.println(F("°C "));
  
  if(t > 35 && h <= 80){
    digitalWrite(fan, HIGH);
    Serial.println(F("Fan ON"));
  }else
  if(t > 35 && h > 80){
    digitalWrite(fan, LOW);
    Serial.println(F("Fan OFF"));
  }else{
    digitalWrite(fan, LOW);
    Serial.println(F("Fan OFF"));
  }
  if(t > 40){
    digitalWrite(speaker, HIGH);
    Serial.println(F("Speaker ON"));
  }else{
    digitalWrite(speaker, LOW);
    Serial.println(F("Speaker OFF"));
  }
}
