cmake_minimum_required(VERSION 3.13)
project(GraphicsPlayground)

set(CMAKE_CXX_STANDARD 17)

function(log_list LIST)
    foreach(element IN LISTS ${LIST})
        message("\t- ${element}")
    endforeach()
endfunction()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(GRAPHICS_HEADERS)
set(GRAPHICS_SOURCES)

include(src/utils/CMakeLists.txt)
include(src/lab1/CMakeLists.txt)

include_directories(src)

add_library(GraphicsLib ${GRAPHICS_HEADERS} ${GRAPHICS_SOURCES})
add_executable(GraphicsApp main.cpp)

target_link_libraries(GraphicsLib ${OpenCV_LIBS})
target_link_libraries(GraphicsApp GraphicsLib)
