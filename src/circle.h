#ifndef PRINTING_CIRCLE_CIRCLE_H
#define PRINTING_CIRCLE_CIRCLE_H

#include <istream>
#include <string>
#include <vector>

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
};

#endif //PRINTING_CIRCLE_CIRCLE_H
