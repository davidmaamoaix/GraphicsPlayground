#pragma once

#include "utils/renderer.h"

class Tracer: public FragmentRenderer {

public:
    Tracer(int w, int h);
    cv::Vec3b pixel(int x, int y) override;
};

