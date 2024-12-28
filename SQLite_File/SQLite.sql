-- SQLite
-- 创建设备信息表
CREATE TABLE Devices (
    DeviceID INTEGER PRIMARY KEY AUTOINCREMENT,
    DeviceName TEXT NOT NULL,
    DeviceType TEXT NOT NULL,
    Location TEXT,
    Status TEXT CHECK(Status IN ('Online', 'Offline', 'Maintenance')) DEFAULT 'Offline',
    LastConnected TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

-- 创建传感器数据表
CREATE TABLE SensorData (
    DataID INTEGER PRIMARY KEY AUTOINCREMENT,
    DeviceID INTEGER,
    SensorType TEXT NOT NULL,
    Value REAL NOT NULL,
    Timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY(DeviceID) REFERENCES Devices(DeviceID)
);

-- 创建用户信息表
CREATE TABLE Users (
    UserID INTEGER PRIMARY KEY AUTOINCREMENT,
    Username TEXT NOT NULL UNIQUE,
    PasswordHash TEXT NOT NULL,
    Role TEXT CHECK(Role IN ('Admin', 'User')) DEFAULT 'User',
    Email TEXT UNIQUE,
    CreatedAt TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

-- 创建设备与用户关联表
CREATE TABLE DeviceUser (
    DeviceID INTEGER,
    UserID INTEGER,
    PermissionLevel TEXT CHECK(PermissionLevel IN ('Read', 'Write', 'Admin')) DEFAULT 'Read',
    PRIMARY KEY(DeviceID, UserID),
    FOREIGN KEY(DeviceID) REFERENCES Devices(DeviceID),
    FOREIGN KEY(UserID) REFERENCES Users(UserID)
);