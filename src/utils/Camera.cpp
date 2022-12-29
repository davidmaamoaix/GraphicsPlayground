#include "Camera.h"

#include <math.h>

Camera::Camera(Vec pos, Vec dir, float fov) {
    pos = position;
    facing = dir;

    float angle = fov / 180 * 3.141526f;
    float halfWidth = std::tan(angle / 2);

    Vec worldUp = {0, 1, 0};
    Vec right = dir.cross(worldUp);
    Vec up = right.cross(facing);

    uDir = 2 * halfWidth * right;
    vDir = 2 * halfWidth * up;

    screenBase = pos + facing;
    screenBase += -halfWidth * right;
    screenBase += -halfWidth * up;
}
