/*
    Led.h Bibliothèque encapsulant l'acces à une led.
*/

#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led 
{
    public:
        Led(int pin);

        void setup();

        void allumer();
        void eteindre();
        bool estAllumee();

    private:
        int _pin;
        bool _status;

};

#endif