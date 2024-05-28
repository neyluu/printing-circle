#include <iostream>
#include <math.h>
#include <fstream>

float distance2Points(int x1, int y1, float x2, float y2);

void printCircle(int radius, char c);
void printCircleToFile(std::string filename, int radius, char c);

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

    int mode;
    std::cout << "Where you want to write output (1 - console, 2 - file):\n";
    std::cin >> mode;

    if(mode != 1 && mode != 2)
    {
        std::cout << "Wrong number!";
        return 0;
    }

    switch (mode)
    {
        case 1:
            printCircle(radius, c);
            break;
        case 2:
            std::string filename;

            std::cout << "Enter filename:\n";
            std::cin >> filename;

            printCircleToFile(filename, radius, c);
            break;
    }

    return 0;
}

float distance2Points(int x1, int y1, float x2, float y2)
{
    float xDistance = pow((x1 - x2), 2);
    float yDistance = pow((y1 - y2), 2);
    return sqrt(xDistance + yDistance);
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

void printCircleToFile(std::string filename, int radius, char c)
{
    std::ofstream file(filename);

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
                file << c << " ";
            }
            else
            {
                file << "  ";
            }
        }
        file << "\n";
    }

    file.close();
}