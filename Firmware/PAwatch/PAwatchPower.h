#ifndef PAwatchPower_h
#define PAwatchPower_h

//Standard Arduina Lidraries
#include <Arduino.h>

class PAwatchPower{
  private:
  public:
    bool isCharging();
    uint16_t getBatteryVoltage();
};

#endif
