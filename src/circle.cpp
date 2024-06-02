#include <iostream>
#include "circle.h"
#include "utils.h"

Circle::Circle(int radius, int borderWidth, char c, bool antialiasing)
    : radius {radius}
    , borderWidth {borderWidth}
    , c {c}
    , antialiasing {antialiasing}
{
}

void Circle::generateFull()
{
    float center = getCenter(radius);
    float distance;

    for(int i = 0; i < (radius * 2); i++)
    {
        std::string row;

        for(int j = 0; j < (radius * 2); j++)
        {
            distance = distance2Points(i, j, center, center);

            if(distance <= float(radius)) row.push_back(c);
            else row.push_back(' ');
        }
        circle.push_back(row);
    }
}

void Circle::generateOnlyEdge()
{
    float center = getCenter(radius);
    float distance;

    for(int i = 0; i < (radius * 2); i++)
    {
        std::string row;

        for(int j = 0; j < (radius * 2); j++)
        {
            distance = distance2Points(i, j, center, center);

            if(distance <= float(radius) && distance >= float(radius - borderWidth)) row.push_back(c);
            else row.push_back(' ');
        }
        circle.push_back(row);
    }
}