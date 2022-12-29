#pragma once

#include <opencv2/opencv.hpp>

typedef cv::Vec3f Vec;

class Ray {

public:
    Ray(Vec from, Vec dir);

private:
    Vec origin;
    Vec direction;
};

