#include "Arduino.h"
#include "pushButton.h"

PushButton::buttonPin(int pin)
{
    _pin = pin;
}

void pushButton::begin()
{
  pinMode(_pin, INPUT);
}

void pushButton::readButtons()
{
_pinState = digitalRead(pin)
}