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
    circle.clear();

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
    circle.clear();

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

void Circle::consolePrint()
{
    for(int i = 0; i < circle.size(); i++)
    {
        std::cout << circle[i] << std::endl;
    }
}

int Circle::saveToFile(const std::string& filename)
{
    std::ofstream file;
    file.open(filename);

    if(!file.is_open()) return -1;

    for(int i = 0; i < circle.size(); i++)
    {
        file << circle[i] << std::endl;
    }

    file.close();
    return 0;
}