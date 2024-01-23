#include <Arduino.h>
#include <iostream>
#include <regex>
#include <string>
#include <stdlib.h>
/*称重功能*/
#include <ration.h>
/*NTP钟校准*/
#include <WiFi.h>
#include <NTPClient.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>

#define RightMotor1 16	//Arduino的6号引脚连接在接D2端口
#define RightMotor2 17	//Arduino的9号引脚连接在接D3端口
#define PWM1 13

using namespace std;

const char *ssid = "LAINA"; //wifi名  LAINA vivo X90s
const char *password = "b8AxM8lqq";//wifi密码 b8AxM8lqq zhrmghgws
const char* ntpServer = "pool.ntp.org"; //ntp服务器
const char *timer_task = "timing"; //定时指令检测
const char *ration_task = "ration";//定量指令检测
String weight_task = "weight:";//称重指令检测
float num; //赋值实时称重量
String jsonweight,weight; //拼接成json格式发送
int ration_function,timer_hour_function,timer_min_function; //传递重量,时间参数
int outputValue = 0;//PWM值读取
int ration_flag = 0;//称重标志位
int weight_t;

hw_timer_t * timer = NULL;                        // 声明一个定时器

const IPAddress serverIP(192,168,31,140); //欲访问的服务端IP地址 192,168,31,140   192,168,91,53
uint16_t serverPort = 8080;         //服务端口号

WiFiUDP ntpUDP; // NTP UDP客户端
NTPClient timeClient(ntpUDP); // NTP客户端对象
WiFiClient client; //声明一个ESP32客户端对象，用于与服务器进行连接

// 闹钟结构体
struct Alarm {
  int hour;
  int min;
  bool enabled;   
};

Alarm alarms[3]; // 3个闹钟槽

void scale_setup();   //称重模块初始化
float ReadCount(void);//AD转换获取数据

/*电机初始化*/
void Motor_Init()
{
  pinMode(RightMotor1, OUTPUT);
  pinMode(RightMotor2, OUTPUT);
  pinMode(PWM1,OUTPUT);
}

/*
	定时称重，反馈当前饲料量,与主程序循环分割，独立于外部计时
*/
void sendweight(void) 
{
  static unsigned long previousMillis = 0;
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis >= 3000){
    // 每3秒执行一次
    previousMillis = currentMillis;
        num = ReadCount();//发送称重数据
        weight = String(num);
        jsonweight = weight_task + weight;
        client.print(jsonweight);
        Serial.println(jsonweight);
  }
}

/*
	定时任务：旋转舵机出料
*/
void PWM_Control(int ration_function)
{
      weight_t = num;
      Serial.println(weight_t);

      digitalWrite(RightMotor1,HIGH);
      digitalWrite(RightMotor2,LOW);
      analogWrite(PWM1, 100); //将a的值赋给motorPin

      Serial.println("目标重量为：");
      Serial.println(weight_t - ration_function);
        while(num >  weight_t - ration_function )
        {
          sendweight();
        }
         digitalWrite(RightMotor1,LOW);
          digitalWrite(RightMotor2,LOW);
          analogWrite(PWM1, 0); //将a的值赋给motorPin
          Serial.println("到达目标");

}

/*
	设置闹钟
*/
void setAlarm(int id, int h, int m) {
  // 设置闹钟时间和开关
  alarms[id].hour = h;
  alarms[id].min = m;  
  alarms[id].enabled = true;
}

/*
	检测闹钟并执行任务
*/
void checkAlarms() {
    //设置多少个就检查多少个-1
  for(int i=0; i<1; i++) {

    if(alarms[i].enabled) { // 检查是否开启

      Serial.print("Alarm ");
      Serial.print(i);
      Serial.print(": "); 
      Serial.print(alarms[i].hour);
      Serial.print(":");
      Serial.println(alarms[i].min);

      if(timeClient.getHours() == alarms[i].hour &&  
         timeClient.getMinutes() == alarms[i].min) {
           if(ration_flag == 0)
          {
            PWM_Control(ration_function);//让电机转动出料，减少重量
            ration_flag == 1;
          }
         Serial.println("Alarm triggered!");
      }
      else ration_flag == 0;
    }
  }
}

/*
	检测倒计时
*/
void checkCountdown(){
 // 获取当前时间
  unsigned long currentSeconds = timeClient.getEpochTime();
  
  // 计算当前时间的小时和分钟
  // 计算倒计时时间
  unsigned long alarmMinutes = (alarms[0].hour * 60 + alarms[0].min) % (24 * 60);
  Serial.print("设置的闹钟时间为");
  Serial.print(alarms[0].hour);
  Serial.print(" h ");
  Serial.print(alarms[0].min);
  Serial.println(" mins");
  unsigned long currentMinutes = (currentSeconds / 60) % (24 * 60);
  Serial.print("今天走过的时间为");
   Serial.print(currentMinutes/60);
   Serial.print(" h ");
  Serial.print(currentMinutes%60);
   Serial.println(" mins");
  unsigned long timeDifference;

  if (alarmMinutes >= currentMinutes) {
    // 闹钟时间在当前时间之后，直接计算时间差
    timeDifference = alarmMinutes - currentMinutes;
  } else {
    // 闹钟时间在当前时间之前，加上一天的分钟数再计算时间差
    timeDifference = (alarmMinutes + (24 * 60)) - currentMinutes;
  }

  if (alarms[0].enabled) {
    if (timeDifference <= 0) {
      // 任务完成
    } else {
      Serial.print("Next task in: ");
      Serial.print(timeDifference);
      Serial.println(" mins");
    }
  } else {
    Serial.println("Countdown is not enabled.");
  }
}

void setup()
{
    Serial.begin(115200);
    Serial.println();

    Motor_Init(); //电机引脚初始化
    digitalWrite(RightMotor1,LOW);
    digitalWrite(RightMotor2,LOW);

    WiFi.mode(WIFI_STA);
    WiFi.setSleep(false); //关闭STA模式下wifi休眠，提高响应速度
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("Connected");
    Serial.print("IP Address:");
    Serial.println(WiFi.localIP());

    scale_setup(); //进行承重初始化

    timeClient.begin(); // 初始化NTP同步
    timeClient.setTimeOffset(28800);  // 设置时区偏移量为8小时（28800秒）
    setAlarm(0,0,0); //设置闹钟1
    

    Serial.println("尝试访问服务器");
    client.connect(serverIP, serverPort);
    Serial.println("访问成功");

    // xTaskCreate(sendweight,"sendweight",2024,NULL,1,&weightHandle);
}

void loop()
{
    Serial.println("/****    task information     ****/");
    timeClient.update(); // 更新时间
    checkCountdown();// 检查倒计时
    checkAlarms(); // 检查闹钟并执行任务
    sendweight(); //传回当前重量

    while(!client.connected()){
        Serial.print("Attempting MQTT connection...");
        if (client.connect(serverIP, serverPort)) 
        {
            Serial.println("connected");  
            return;
        }
    }

    if (client.available()) //如果有数据可读取
    {
        String strBuf   = client.readStringUntil('\n'); //读取数据到换行符

         outputValue=analogRead(PWM1); //outputValue:0~1023
         Serial.print("output=");
         Serial.println(outputValue);

        /*收到的数据统一成类似Json格式，如{alarm_timing:12,alarm_minute:30,ration:60}*/
        String str_hour = strBuf.substring(strBuf.indexOf("alarm_timing:") + ((String)"alarm_timing:").length(), strBuf.indexOf("alarm_minute:")-1);
        String str_minute = strBuf.substring(strBuf.indexOf("alarm_minute:") + ((String)"alarm_minute:").length(), strBuf.indexOf("ration:")-1);
        String str_ration = strBuf.substring(strBuf.indexOf("ration:") + ((String)"ration:").length(), strBuf.indexOf("}"));
        timer_hour_function = str_hour.toInt();//改变全局变量，导入定时任务进行处理
        timer_min_function = str_minute.toInt();//改变全局变量，导入定时任务进行处理
        ration_function = str_ration.toInt();//改变全局变量，导入定时任务进行处理
        Serial.print("str_hour: ");
        Serial.println(timer_hour_function);
        Serial.print("str_minute: ");
        Serial.println(timer_min_function);
        Serial.print("str_ration: ");
        Serial.println(ration_function);
        setAlarm(0,timer_hour_function,timer_min_function);
        //PWM_Control(ration_function);
    }

    vTaskDelay(3000/portTICK_PERIOD_MS);
     
  
}
