#ifndef _MQTT_ASYNC_PUBLISH_H_
#define _MQTT_ASYNC_PUBLISH_H_

#include "MQTTAsync.h"


#if !defined(_WIN32)
#include <unistd.h>
#else
#include <windows.h>
#endif

#if defined(_WRS_KERNEL)
#include <OsWrapper.h>
#endif

#define EXAMPLE_PRODUCT_KEY            "k1xu17JLQJa" 
#define EXAMPLE_DEVICE_NAME            "LightSwitch" 
#define EXAMPLE_DEVICE_SECRET          "b6c158a677feea0367bd4f7cf1279801"

#define ADDRESS     "tcp://iot-06z009w9nsw8q0f.mqtt.iothub.aliyuncs.com:443"
#define TOPIC       "/sys/"EXAMPLE_PRODUCT_KEY"/"EXAMPLE_DEVICE_NAME"/thing/event/property/post"
#define PAYLOAD     "Hello World!"
#define QOS         1

void connlost(void *context, char *cause);
void onDisconnectFailure(void* context, MQTTAsync_failureData* response);
void onDisconnect(void* context, MQTTAsync_successData* response);
void onSendFailure(void* context, MQTTAsync_failureData* response);
void onSend(void* context, MQTTAsync_successData* response);
void onConnectFailure(void* context, MQTTAsync_failureData* response);
void onConnect(void* context, MQTTAsync_successData* response);
int messageArrived(void* context, char* topicName, int topicLen, MQTTAsync_message* m);
int connect_mqtt();

#endif