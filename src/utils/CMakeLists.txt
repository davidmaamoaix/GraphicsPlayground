cmake_minimum_required(VERSION 3.13)

set(UTILS_HEADERS

    src/utils/renderer.h
    )

set(UTILS_SOURCES

    src/utils/renderer.cpp
    )

list(APPEND GRAPHICS_HEADERS ${UTILS_HEADERS})
list(APPEND GRAPHICS_SOURCES ${UTILS_SOURCES})
