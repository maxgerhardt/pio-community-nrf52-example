#include <Arduino.h>
#include <Adafruit_TinyUSB.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Hello, world!");
  delay(1000);
}
