cmake_minimum_required(VERSION 3.13)

set(LAB1_HEADERS
    src/lab1/tracer.h
    )

set(LAB1_SOURCES
    src/lab1/tracer.cpp
    )

list(APPEND GRAPHICS_HEADERS ${LAB1_HEADERS})
list(APPEND GRAPHICS_SOURCES ${LAB1_SOURCES})
