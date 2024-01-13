#ifndef __WEIGHT_H_
#define __WEIGHT_H_
#include <Arduino.h>
#include "HX711.h"
#include "soc/rtc.h"

// ADC（注意使用了wifi的话，ADC2的所有通道都不能用）故使用ADC1 GPIO34
#define LOADCELL_DOUT_PIN  34
#define LOADCELL_SCK_PIN 3
#define CALIBRATION_FACTOR 449.033

void scale_setup();
float ReadCount(void);

#endif 