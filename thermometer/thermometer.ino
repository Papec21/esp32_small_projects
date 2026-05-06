#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

const int SDA_PIN = 19;
const int SCL_PIN = 21;

Adafruit_BME280 bme;
unsigned status;
unsigned long delayTime;

void setup() {
  Serial.begin(115200);
  Serial.println("Thermometer on");

  Wire.begin(SDA_PIN, SCL_PIN);
  status = bme.begin(0x76);
  delayTime = 1000;
}

void loop() {
  printTemperature();
  delay(delayTime);
}

void printTemperature() {
  Serial.print("Temperature: ");
  Serial.print(bme.readTemperature());
  Serial.println(" *C");
}