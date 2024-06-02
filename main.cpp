#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <vector>

#include "src/utils.h"
#include "src/circle.h"

int main()
{
    Circle circle1(10, 1, '$', false);
    Circle circle2(10, 1, '$', false);

    circle1.generateFull();
    circle2.generateOnlyEdge();

    for (int i = 0; i < circle1.circle.size(); i++) {
        std::cout << circle1.circle[i] << '\n';
    }
    std::cout << '\n';
    for (int i = 0; i < circle2.circle.size(); i++) {
        std::cout << circle2.circle[i] << '\n';
    }

}