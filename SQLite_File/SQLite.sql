-- SQLite
-- 创建表mqtt_parameters
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

INSERT INTO mqtt_parameters (product_key, device_name, device_secret, address, topic, qos)
VALUES ('k1xu17JLQJa', 'LightInBedroom', '9b3115c0c384ef38f36aab5391d8808f', 'tcp://iot-06z009w9nsw8q0f.mqtt.iothub.aliyuncs.com:443', '/sys/k1xu17JLQJa/LightInBedroom/thing/event/property/post', 1);

INSERT INTO mqtt_parameters (product_key, device_name, device_secret, address, topic, qos)
VALUES ('k1xu17JLQJa', 'LightInWashroom', 'd5f5908f0af2accdade069624de09630', 'tcp://iot-06z009w9nsw8q0f.mqtt.iothub.aliyuncs.com:443', '/sys/k1xu17JLQJa/LightInWashroom/thing/event/property/post', 1);

INSERT INTO mqtt_parameters (product_key, device_name, device_secret, address, topic, qos)
VALUES ('k1xu17JLQJa', 'LightInKitchen', '7f4f9f36f9aa5ccff22952cc41f8e67f', 'tcp://iot-06z009w9nsw8q0f.mqtt.iothub.aliyuncs.com:443', '/sys/k1xu17JLQJa/LightInKitchen/thing/event/property/post', 1);

INSERT INTO mqtt_parameters (product_key, device_name, device_secret, address, topic, qos)
VALUES ('k1xu17JLQJa', 'LightInStudy', 'f8d44f5be3201f9eec7f5e693e10b2c7', 'tcp://iot-06z009w9nsw8q0f.mqtt.iothub.aliyuncs.com:443', '/sys/k1xu17JLQJa/LightInStudy/thing/event/property/post', 1);