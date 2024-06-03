#ifndef PRINTING_CIRCLE_CIRCLE_H
#define PRINTING_CIRCLE_CIRCLE_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class Circle
{
public:
    int radius;
    int borderWidth;
    char c;
    bool antialiasing;
    std::vector<std::string> circle;

    Circle(int radius, int borderWidth, char c, bool antialiasing);
    void generateFull();
    void generateOnlyEdge();
    void consolePrint();
    int saveToFile(const std::string& filename);
};

#endif //PRINTING_CIRCLE_CIRCLE_H
