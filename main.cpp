#include <iostream>

#include "utils/renderer.h"
#include "lab1/tracer.h"

int main() {
    Tracer tracer{512, 512};
    renderScene(&tracer);
}