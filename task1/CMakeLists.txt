cmake_minimum_required(VERSION 3.16)

project(task1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(task1 main.cpp)

target_link_libraries(task1 Qt6::Widgets)
