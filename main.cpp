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

    circle1.generateFull();
    circle1.consolePrint();
    circle1.radius = 20;
    circle1.c = '#';
    circle1.generateOnlyEdge();
    circle1.consolePrint();
}