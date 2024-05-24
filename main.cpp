#include <iostream>
#include <math.h>

float distance2Points(int x1, int y1, float x2, float y2);
void printCircle(int radius, char c);

int main()
{
    int radius;
    char c;

    std::cout << "Enter radius of circle:\n";
    std::cin >> radius;

    if(radius <= 0)
    {
        std::cout << "Wrong radius value!";
        return 0;
    }

    std::cout << "Enter char to print:\n";
    std::cin >> c;

    printCircle(radius, c);

    return 0;
}

float distance2Points(int x1, int y1, float x2, float y2)
{
    float xDistance = pow((x1 - x2), 2);
    float yDistance = pow((y1 - y2), 2);
    float distance = sqrt(xDistance + yDistance);
    return distance;
}

void printCircle(int radius, char c)
{
    float center = radius;
    if(int(radius * 2) % 2 == 0)
    {
        center = radius - 0.5;
    }

    for(int i = 0; i < (radius * 2); i++)
    {
        for(int j = 0; j < (radius * 2); j++)
        {
            float distance = distance2Points(i, j, center, center);

            if(distance <= float(radius))
            {
                std::cout << c << " ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
}