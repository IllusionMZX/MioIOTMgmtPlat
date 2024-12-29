# MioIOTMgmtPlat

![语言](https://img.shields.io/badge/语言-C-9A90FD.svg)  ![部署](https://img.shields.io/badge/部署-VSCode-4B91D8.svg)

[English](#en) | [中文](#cn)

**基于LVGL的嵌入式物联网管理平台**

## <span id="cn">MioIOTMgmtPlat</span>

### 上手指南

本项目采用C语言编写，模拟器项目用于在PC上运行LVGL嵌入式GUI库。项目文件夹中包含项目的源代码，使用VSCode进行开发，并使用Msys2中的mingw64作为编译器。通过CMake进行项目构建。

### 环境配置要求

1. **SDL** 低级驱动库，用于图形、鼠标、键盘等操作。
2. **Msys2** 包含mingw64编译器。
3. **VSCode** 集成开发环境。
4. **CMake** 构建工具。

#### SDL 安装

- **Windows**: 可以从 [SDL 官方网站](https://www.libsdl.org/) 下载。
- **Linux**: 可以通过终端安装：
  ```sh
  sudo apt-get update && sudo apt-get install -y build-essential libsdl2-dev
  ```

#### Msys2 安装

1. 下载并安装 [Msys2](https://www.msys2.org/)。
2. 打开 Msys2 终端并更新包数据库：
   ```sh
   pacman -Syu
   ```
3. 安装 mingw64 编译器和 CMake：
   ```sh
   pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-cmake mingw-w64-x86_64-SDL2
   ```

#### VSCode 安装

从 [VSCode 官方网站](https://code.visualstudio.com/) 下载并安装。

### 导入项目

1. 克隆项目仓库：
   ```sh
   git clone --recursive https://github.com/IllusionMZX/MioIOTMgmtPlat.git
   ```
2. 打开 VSCode。
3. 使用 VSCode 打开克隆的项目文件夹。

### 使用 CMake 构建项目

1. 打开 VSCode 的终端（`Ctrl + `）。
2. 创建一个新的构建目录，例如 `build`：
   ```sh
   mkdir build
   cd build
   ```
3. 运行 CMake 生成构建文件：
   ```sh
   cmake -G "MinGW Makefiles" ..
   ```
4. 构建项目：
   ```sh
   mingw32-make
   ```

### 运行项目

构建完成后，可执行文件将在 `build` 目录下生成。运行可执行文件：
```sh
./MioIOTMgmtPlat
```

## <span id="en">MioIOTMgmtPlat</span>

### Guide

This project is written in C for running the LVGL embedded GUI library on a PC. The project folder contains the source code of the project. The project is developed using VSCode and uses the mingw64 compiler from Msys2. CMake is used for building the project.

### Environment

1. **SDL** a low level driver library to use graphics, handle mouse, keyboard etc.
2. **Msys2** containing the mingw64 compiler.
3. **VSCode** integrated development environment.
4. **CMake** build tool.

#### SDL Installation

- **Windows**: Download from [SDL official website](https://www.libsdl.org/).
- **Linux**: Install via terminal:
  ```sh
  sudo apt-get update && sudo apt-get install -y build-essential libsdl2-dev
  ```

#### Msys2 Installation

1. Download and install [Msys2](https://www.msys2.org/).
2. Open Msys2 terminal and update package database:
   ```sh
   pacman -Syu
   ```
3. Install mingw64 compiler and CMake:
   ```sh
   pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-cmake mingw-w64-x86_64-SDL2
   ```

#### VSCode Installation

Download and install VSCode from [VSCode official website](https://code.visualstudio.com/).

### Import Project

1. Clone the project repository:
   ```sh
   git clone --recursive https://github.com/IllusionMZX/MioIOTMgmtPlat.git
   ```
2. Open VSCode.
3. Open the cloned project folder in VSCode.

### Build Project with CMake

1. Open the VSCode terminal (`Ctrl + `).
2. Create a new build directory, for example `build`:
   ```sh
   mkdir build
   cd build
   ```
3. Run CMake to generate build files:
   ```sh
   cmake -G "MinGW Makefiles" ..
   ```
4. Build the project:
   ```sh
   mingw32-make
   ```

### Run Project

After building, the executable file will be in the `build` directory. Run the executable:
```sh
./MioIOTMgmtPlat
```

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request!

If you find an issue, please report it via GitHub!

### Author

martin.zx.miao@outlook.com

### Reference

- [LVGL GitHub](https://github.com/lvgl/lvgl)

### Copyright

The project is licensed under the MIT License, for more information see [LICENSE](https://github.com/IllusionMZX/MioIOTMgmtPlat/blob/main/LICENSE).
