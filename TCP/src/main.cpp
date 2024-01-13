#include <WiFi.h>
#include <iostream>
#include <regex>
#include <string>
#include <stdlib.h>
#include <ration.h>

using namespace std;

const char *ssid = "vivo X90s"; //wifi名  LAINA
const char *password = "zhrmghgws";//wifi密码 b8AxM8lqq
const char *timer_task = "timing"; //定时指令检测
const char *ration_task = "ration";//定量指令检测
String weight_task = "weight:";//称重指令检测
float num; //赋值实时称重量
String jsonweight,weight; //拼接成json格式发送


const IPAddress serverIP(192,168,91,53); //欲访问的服务端IP地址
uint16_t serverPort = 8080;         //服务端口号

WiFiClient client; //声明一个ESP32客户端对象，用于与服务器进行连接
TaskHandle_t weightHandle;

void scale_setup();
float ReadCount(void);

void sendweight(void){
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


void setup()
{
    Serial.begin(115200);
    Serial.println();

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

    // xTaskCreate(sendweight,"sendweight",2024,NULL,1,&weightHandle);
}

void loop()
{
    Serial.println("尝试访问服务器");
    if (client.connect(serverIP, serverPort)) //尝试访问目标地址
    {
        Serial.println("访问成功");
   
        sendweight();

        // while (client.connected() || client.available()) //如果已连接或有收到的未读取的数据
        // {
            if (client.available()) //如果有数据可读取
            {
                String line = client.readStringUntil('\n'); //读取数据到换行符
                //client.write(line.c_str()); //将收到的数据回发
                String task_timer = strstr(line.c_str(),timer_task);
                String task_ration = strstr(line.c_str(),ration_task);

                if(task_timer != NULL)
                {
                    int index = line.indexOf(":");//获取第一个":"的位置
                    String timer_number = line.substring(index+1);
                    //int timer_number = after1.toInt();
                    client.print(timer_number);
                }
                if(task_ration != NULL)
                {
                    int index = line.indexOf(":");//获取第一个":"的位置
                    String ration_number = line.substring(index+1);
                    //int ration_number = after1.toInt();
                    client.print(ration_number);
                }
            }

        Serial.println("close");
        client.stop(); //关闭客户端
    }
    else
    {
        Serial.println("访问失败");
        client.stop(); //关闭客户端
    }
    vTaskDelay(3000/portTICK_PERIOD_MS);
}
