#ifndef pushButton_h
#define pushButton_h

#include "Arduino.h" //va sempre incluso nelle librerie

class pushButton{
   public:
      buttonPin(int pin);
      void begin();
      void readButtons();
      void pressedTime();
   private:
      int _pin;
      int _pinState;
};

#endif