#include "ration.h"
float reading;

HX711 scale;

void scale_setup()
{
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  
  Serial.println("无校准：");
  Serial.print("读数: \t\t");
  Serial.println(scale.read());      // 打印ADC的原始读数

  Serial.print("读数平均值: \t\t");
  Serial.println(scale.read_average(20));   // 打印ADC 20个读数的平均值

  Serial.print("获取值: \t\t");
  Serial.println(scale.get_value(5));   // 打印ADC的5个读数的平均值减去皮重（尚未设置）

  Serial.print("获取单位: \t\t");
  Serial.println(scale.get_units(5), 1);  // 打印ADC的5个读数的平均值减去皮重（未设置）

  scale.set_scale(CALIBRATION_FACTOR);   // this value is obtained by calibrating the scale with known weights; see the README for details
  scale.tare();               // reset the scale to 0
  
  Serial.println("设置磅秤后:");

  Serial.print("读数: \t\t");
  Serial.println(scale.read());                 // 设置磅秤后

  Serial.print("read ave: \t\t");
  Serial.println(scale.read_average(20));       // 打印ADC 20个读数的平均值

  Serial.print("获取值: \t\t");
  Serial.println(scale.get_value(5));   // 打印ADC的5个读数的平均值减去皮重，用皮重（）设置

  Serial.print("获取单位: \t\t");
  Serial.println(scale.get_units(5), 1);        // 打印ADC的5个读数的平均值减去皮重，除以


}


//读取AD值
float ReadCount()
{
  if (scale.wait_ready_timeout(200)) {
    reading = round(scale.get_units());
  }
  return reading;
}