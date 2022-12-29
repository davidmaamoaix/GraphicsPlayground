#include "renderer.h"

#include <iostream>

FragmentRenderer::FragmentRenderer(int w, int h)
: width(w), height(h) {}

int FragmentRenderer::getWidth() {
    return width;
}

int FragmentRenderer::getHeight() {
    return height;
}

void renderScene(FragmentRenderer *renderer) {
    int width = renderer->getWidth();
    int height = renderer->getHeight();

    cv::Mat img(width, height, CV_8UC3);
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            cv::Vec3b color = renderer->pixel(x, y);

            img.at<cv::Vec3b>(y, x) = color;
        }

        std::cout << x << std::endl;
    }

    cv::imshow("Scene", img);
    cv::waitKey(0);
}
