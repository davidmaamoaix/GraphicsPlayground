#pragma once

#include <opencv2/opencv.hpp>

#include "utils/math/Ray.h"

class Camera {

public:
    Camera(Vec pos, Vec dir, float fov);

private:
    Vec position, facing;
    Vec uDir, vDir;
    Vec screenBase; // bottom-left of screen
};
