cmake_minimum_required(VERSION 3.10)
project(lvgl)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE INCLUDES "lv_drivers/*.h" "IOT_UI/*.h" "MQTT/*.h" "lvgl/*.h"  "./*.h" )
file(GLOB_RECURSE SOURCES  "lv_drivers/*.c" "IOT_UI/*.c" "MQTT/*.c" "lvgl/src/*.c" )
file(COPY SDL2.dll DESTINATION ../bin)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-O3")

find_package(SDL2 REQUIRED SDL2)
find_package(eclipse-paho-mqtt-c REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
add_executable(main main.c mouse_cursor_icon.c ${SOURCES} ${INCLUDES})
add_compile_definitions(LV_CONF_INCLUDE_SIMPLE)
target_link_libraries(main PRIVATE SDL2 )
target_link_libraries(main PRIVATE paho-mqtt3as)
target_link_libraries(main PRIVATE sqlite3)
add_custom_target (run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main)
