#include <WiFi.h>
#include <iostream>
#include <regex>
#include <string>
#include <stdlib.h>
using namespace std;

const char *ssid = "LAINA"; //wifi名
const char *password = "b8AxM8lqq";//wifi密码
const char *timer_task = "timing"; //定时指令检测
const char *ration_task = "ration";//定量指令检测

const IPAddress serverIP(192,168,31,140); //欲访问的服务端IP地址
uint16_t serverPort = 8080;         //服务端口号

WiFiClient client; //声明一个ESP32客户端对象，用于与服务器进行连接

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
}

void loop()
{
    Serial.println("try to question");
    if (client.connect(serverIP, serverPort)) //尝试访问目标地址
    {
        Serial.println("success");
        client.print("Hello world!");                    //向服务器发送数据
        while (client.connected() || client.available()) //如果已连接或有收到的未读取的数据
        {
            if (client.available()) //如果有数据可读取
            {
                String line = client.readStringUntil('\n'); //读取数据到换行符
                //client.write(line.c_str()); //将收到的数据回发
                String task_timer = strstr(line.c_str(),timer_task);
                String task_ration = strstr(line.c_str(),ration_task);

                if(task_timer != NULL)
                {
                    int index = line.indexOf(":");//获取第一个":"的位置
                    String after1 = line.substring(index+1);
                    int timer_number = after1.toInt();
                    client.print(timer_number);
                }
                if(task_ration != NULL)
                {
                    int index = line.indexOf(":");//获取第一个":"的位置
                    String after1 = line.substring(index+1);
                    int ration_number = after1.toInt();
                    client.print(ration_number);
                }
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
    delay(5000);
}
