#pragma once

#include "utils/math/Ray.h"

struct HitInfo {
    bool hit;
    Vec pos;
    Vec normal;
};

class Shape {

    virtual HitInfo collide(const Ray &ray) = 0;
};

class Sphere: public Shape {

    HitInfo collide(const Ray &ray) override;
};
