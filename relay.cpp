/*
  relay.h - Library for the Relay Shield.
  Created by Dylan M. Corrales, in September 2016.
*/

#include "relay.h"

relay::relay(int relaynum) {
  if (1 <= relaynum <= 4) {
    pinMode(relaynum + 6, OUTPUT);
  }
}

void relay::num1(int state) {
  if (state == 1) {
    digitalWrite(7, HIGH); // Turns on EL Wire
  } else if (state == 0) {
    digitalWrite(7, LOW); // Turns off EL Wire
  }
}

void relay::num2(int state) {
  if (state == 1) {
    digitalWrite(8, HIGH); // Turns on EL Wire
  } else if (state == 0) {
    digitalWrite(8, LOW); // Turns off EL Wire
  }
}

void relay::num3(int state) {
  if (state == 1) {
    digitalWrite(9, HIGH); // Turns on EL Wire
  } else if (state == 0) {
    digitalWrite(9, LOW); // Turns off EL Wire
  }
}

void relay::num4(int state) {
  if (state == 1) {
    digitalWrite(10, HIGH); // Turns on EL Wire
  } else if (state == 0) {
    digitalWrite(10, LOW); // Turns off EL Wire
  }
}
