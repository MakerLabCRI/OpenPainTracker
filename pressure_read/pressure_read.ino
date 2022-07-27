#include <Arduino.h>


#define  PIN_VBAT     A7   // this is just a mock read, we'll use the light sensor, so we can run the test


uint32_t vbat_pin = PIN_VBAT;             // A7 for feather nRF52832, A6 for nRF52840

float raw;


void setup() {
  Serial.begin(115200);
  while ( !Serial ) delay(10);   // for nrf52840 with native usb
}

void loop() {
  // Get a raw ADC reading
  // Get the raw 12-bit, 0..3000mV ADC value
  raw = analogRead(vbat_pin);
  Serial.println(raw);
  delay(100);
}
