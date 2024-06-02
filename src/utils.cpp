#include <cmath>
#include "utils.h"

float distance2Points(int x1, int y1, float x2, float y2)
{
    float xDistance = pow((x1 - x2), 2);
    float yDistance = pow((y1 - y2), 2);
    return sqrt(xDistance + yDistance);
}

float getCenter(int radius)
{
    float center = float(radius);

    if(int(radius * 2) % 2 == 0)
    {
        center = radius - 0.5;
    }

    return center;
}