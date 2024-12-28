-- SQLite
CREATE TABLE mqtt_parameters (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    product_key TEXT NOT NULL,
    device_name TEXT NOT NULL,
    device_secret TEXT NOT NULL,
    address TEXT NOT NULL,
    topic TEXT NOT NULL,
    qos INTEGER NOT NULL
);

-- 插入数据
INSERT INTO mqtt_parameters (product_key, device_name, device_secret, address, topic, qos)
VALUES ('k1xu17JLQJa', 'LightSwitch', 'b6c158a677feea0367bd4f7cf1279801', 'tcp://iot-06z009w9nsw8q0f.mqtt.iothub.aliyuncs.com:443', '/sys/k1xu17JLQJa/LightSwitch/thing/event/property/post', 1);
