cmake_minimum_required(VERSION 3.13)
project(GraphicsPlayground)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

add_executable(GraphicsPlayground main.cpp)