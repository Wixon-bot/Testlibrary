#ifndef TESTLIBRARY_H
#define TESTLIBRARY_H
#include <Arduino.h>
int sum(int a, int b);
class Led {
  
  private:
    byte pin;
    
  public:
    // Setup pin LED and call init()
    Led(byte pin);
    // Setup the pin led as OUTPUT
    // and power off the LED - default state
    void init();
    
    // Power on the LED
    void on();
    // Power off the LED
    void off();
};

#endif