/*
  relay.h - Library for the Relay Shield.
  Created by Dylan M. Corrales, in September 2016.
*/

#ifndef relay_h
#define relay_h

#include "Arduino.h"

class relay{
  public:
    relay(int relaynum);
    void num1(int state);
    void num2(int state);
    void num3(int state);
    void num4(int state);
  private:
    int _pin;
};

#endif
