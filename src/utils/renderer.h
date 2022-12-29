#pragma once

#include <opencv2/opencv.hpp>

class FragmentRenderer {

public:
    FragmentRenderer(int w, int h);
    virtual cv::Vec3b pixel(int x, int y) = 0;

    int getWidth();
    int getHeight();

private:
    int width, height;
};

void renderScene(FragmentRenderer *renderer);
