#include <Arduino.h>
#include <Led.h>

Led led(13);

void setup() {
  led.setup();
  led.allumer();
}

void loop() {
  
}