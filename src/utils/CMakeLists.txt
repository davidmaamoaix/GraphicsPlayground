cmake_minimum_required(VERSION 3.13)

set(UTILS_HEADERS

    src/utils/renderer.h
    src/utils/Camera.h

    src/utils/math/Ray.h
    src/utils/math/geometry.h
    )

set(UTILS_SOURCES

    src/utils/renderer.cpp
    src/utils/Camera.cpp

    src/utils/math/Ray.cpp
    src/utils/math/geometry.cpp
    )

list(APPEND GRAPHICS_HEADERS ${UTILS_HEADERS})
list(APPEND GRAPHICS_SOURCES ${UTILS_SOURCES})
