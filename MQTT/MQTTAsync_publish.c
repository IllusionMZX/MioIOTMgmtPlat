/*******************************************************************************
 * Copyright (c) 2012, 2022 IBM Corp., Ian Craggs
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v2.0
 * and Eclipse Distribution License v1.0 which accompany this distribution. 
 *
 * The Eclipse Public License is available at 
 *   https://www.eclipse.org/legal/epl-2.0/
 * and the Eclipse Distribution License is available at 
 *   http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * Contributors:
 *    Ian Craggs - initial contribution
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include "MQTTAsync_publish.h"



int finished = 0;
int aiotMqttSign(const char *productKey, const char *deviceName, const char *deviceSecret,
                     char clientId[150], char username[64], char password[65]);

int query_device_info(const char *device_name, char *product_key, char *device_secret, char *address, char *topic, int *qos) {
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    sqlite3_stmt *stmt;

    // 打开数据库
    rc = sqlite3_open("../SQLite_File/mqtt_config.db", &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return rc;
    }

    // 准备查询语句
    const char *sql = "SELECT product_key, device_secret, address, topic, qos FROM mqtt_parameters WHERE device_name = ?;";
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return rc;
    }

    // 绑定设备名参数
    sqlite3_bind_text(stmt, 1, device_name, -1, SQLITE_STATIC);

    // 执行查询
    rc = sqlite3_step(stmt);
    if (rc == SQLITE_ROW) {
        strcpy(product_key, (const char *)sqlite3_column_text(stmt, 0));
        strcpy(device_secret, (const char *)sqlite3_column_text(stmt, 1));
        strcpy(address, (const char *)sqlite3_column_text(stmt, 2));
        strcpy(topic, (const char *)sqlite3_column_text(stmt, 3));
        *qos = sqlite3_column_int(stmt, 4);
    } else {
        fprintf(stderr, "Device not found\n");
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return rc;
    }

    // 清理
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return SQLITE_OK;
} // -- add by Miao ZiXiang

int query_device_names(char ***device_names, int *device_count) {
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    sqlite3_stmt *stmt;

    // 打开数据库
    rc = sqlite3_open("../SQLite_File/mqtt_config.db", &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return rc;
    }

    // 准备查询语句
    const char *sql = "SELECT device_name FROM mqtt_parameters;";
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return rc;
    }

    // 计算设备数量
    *device_count = 0;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        (*device_count)++;
    }

    // 重置语句
    sqlite3_reset(stmt);

    // 分配内存存储设备名
    *device_names = (char **)malloc(*device_count * sizeof(char *));
    if (*device_names == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return -1;
    }

    // 查询设备名并存储
    int i = 0;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const char *device_name = (const char *)sqlite3_column_text(stmt, 0);
        (*device_names)[i] = strdup(device_name);
        if ((*device_names)[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            for (int j = 0; j < i; j++) {
                free((*device_names)[j]);
            }
            free(*device_names);
            sqlite3_finalize(stmt);
            sqlite3_close(db);
            return -1;
        }
        i++;
    }

    // 清理
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return SQLITE_OK;
}
void connlost(void *context, char *cause)
{
	MQTTAsync client = (MQTTAsync)context;
	MQTTAsync_connectOptions conn_opts = MQTTAsync_connectOptions_initializer;
	int rc;

	printf("\nConnection lost\n");
	printf("     cause: %s\n", cause);

	printf("Reconnecting\n");
	conn_opts.keepAliveInterval = 20;
	conn_opts.cleansession = 1;
	if ((rc = MQTTAsync_connect(client, &conn_opts)) != MQTTASYNC_SUCCESS)
	{
		printf("Failed to start connect, return code %d\n", rc);
 		finished = 1;
	}
}

void onDisconnectFailure(void* context, MQTTAsync_failureData* response)
{
	printf("Disconnect failed\n");
	finished = 1;
}

void onDisconnect(void* context, MQTTAsync_successData* response)
{
	printf("Successful disconnection\n");
	finished = 1;
}

void onSendFailure(void* context, MQTTAsync_failureData* response)
{
	MQTTAsync client = (MQTTAsync)context;
	MQTTAsync_disconnectOptions opts = MQTTAsync_disconnectOptions_initializer;
	int rc;

	printf("Message send failed token %d error code %d\n", response->token, response->code);
	opts.onSuccess = onDisconnect;
	opts.onFailure = onDisconnectFailure;
	opts.context = client;
	if ((rc = MQTTAsync_disconnect(client, &opts)) != MQTTASYNC_SUCCESS)
	{
		printf("Failed to start disconnect, return code %d\n", rc);
		exit(EXIT_FAILURE);
	}
}

void onSend(void* context, MQTTAsync_successData* response)
{
	MQTTAsync client = (MQTTAsync)context;
	MQTTAsync_disconnectOptions opts = MQTTAsync_disconnectOptions_initializer;
	int rc;

	printf("Message with token value %d delivery confirmed\n", response->token);
	opts.onSuccess = onDisconnect;
	opts.onFailure = onDisconnectFailure;
	opts.context = client;
	if ((rc = MQTTAsync_disconnect(client, &opts)) != MQTTASYNC_SUCCESS)
	{
		printf("Failed to start disconnect, return code %d\n", rc);
		exit(EXIT_FAILURE);
	}
}


void onConnectFailure(void* context, MQTTAsync_failureData* response)
{
	printf("Connect failed, rc %d\n", response ? response->code : 0);
	finished = 1;
}


void onConnect(void* context, MQTTAsync_successData* response)
{
	MQTTAsync client = (MQTTAsync)context;
	MQTTAsync_responseOptions opts = MQTTAsync_responseOptions_initializer;
	MQTTAsync_message pubmsg = MQTTAsync_message_initializer;
	int rc;

	printf("Successful connection\n");
	opts.onSuccess = onSend;
	opts.onFailure = onSendFailure;
	opts.context = client;
	pubmsg.payload = PAYLOAD;
	pubmsg.payloadlen = (int)strlen(PAYLOAD);
	pubmsg.qos = QOS;
	pubmsg.retained = 0;
	if ((rc = MQTTAsync_sendMessage(client, TOPIC, &pubmsg, &opts)) != MQTTASYNC_SUCCESS)
	{
		printf("Failed to start sendMessage, return code %d\n", rc);
		exit(EXIT_FAILURE);
	}
}

int messageArrived(void* context, char* topicName, int topicLen, MQTTAsync_message* m)
{
	/* not expecting any messages */
	return 1;
}

int connect_mqtt() {
    int rc = 0;

    // 查询设备信息
    char product_key[100];
    char device_secret[100];
    char address[200];
    char topic[200];
    int qos;

    rc = query_device_info("LightSwitch", product_key, device_secret, address, topic, &qos);
    if (rc != SQLITE_OK) {
        printf("Failed to query device info, return code %d\n", rc);
        return rc;
    }

    printf("product_key: %s\n", product_key);
    printf("device_secret: %s\n", device_secret);
    printf("address: %s\n", address);
    printf("topic: %s\n", topic);
    printf("qos: %d\n", qos);

    /* invoke aiotMqttSign to generate mqtt connect parameters */
    char clientId[150] = {0};
    char username[65] = {0};
    char password[65] = {0};

    MQTTAsync client;
    MQTTAsync_connectOptions conn_opts = MQTTAsync_connectOptions_initializer;

    if ((rc = aiotMqttSign(product_key, "LightSwitch", device_secret, clientId, username, password) < 0)) {
        printf("aiotMqttSign -%0x4x\n", -rc);
        return -1;
    }
    printf("clientid: %s\n", clientId);
    printf("username: %s\n", username);
    printf("password: %s\n", password);

    if ((rc = MQTTAsync_create(&client, address, clientId, MQTTCLIENT_PERSISTENCE_NONE, NULL)) != MQTTASYNC_SUCCESS) {
        printf("Failed to create client object, return code %d\n", rc);
        return rc;
    }

    if ((rc = MQTTAsync_setCallbacks(client, NULL, connlost, messageArrived, NULL)) != MQTTASYNC_SUCCESS) {
        printf("Failed to set callback, return code %d\n", rc);
        return rc;
    }

    conn_opts.keepAliveInterval = 60;
    conn_opts.cleansession = 1;
    conn_opts.onSuccess = onConnect;
    conn_opts.onFailure = onConnectFailure;
    conn_opts.context = client;
    conn_opts.username = username;
    conn_opts.password = password;

    if ((rc = MQTTAsync_connect(client, &conn_opts)) != MQTTASYNC_SUCCESS) {
        printf("Failed to start connect, return code %d\n", rc);
        return rc;
    }

    printf("Waiting for publication of %s\n"
         "on topic %s for client\n",
         PAYLOAD, topic);

    while (!finished)
        #if defined(_WIN32)
            Sleep(100);
        #else
            usleep(10000L);
        #endif

    MQTTAsync_destroy(&client);
    return rc;
} // -- modify by Miao Zixiang