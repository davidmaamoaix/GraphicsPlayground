#include "tracer.h"

Tracer::Tracer(int w, int h): FragmentRenderer(w, h) {}

cv::Vec3b Tracer::pixel(int x, int y) {
    return {0, 0, 0};
}
