#include <iostream>

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
    circle1.saveToFile("out.txt");
    circle1.radius = 100;
    circle1.generateFull();
    circle1.saveToFile("out2.txt");
}