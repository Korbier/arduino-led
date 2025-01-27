#include "Arduino.h"
#include "Led.h"

Led::Led(int pin) {
    _pin = pin;
    _status = false;
}

void Led::setup() {
    pinMode(_pin, OUTPUT);
}

void Led::allumer() {
    digitalWrite(_pin, HIGH);
    _status = true;
}

void Led::eteindre() {
    digitalWrite(_pin, LOW);
    _status = false;
}

bool Led::estAllumee() {
    return _status;
}