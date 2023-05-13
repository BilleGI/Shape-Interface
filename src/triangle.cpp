#include "triangle.h"
#include <iostream>
#include <cmath>

void checkSide(double& param)
{
    while(param <= 0)
    {
        std::cout << "Enter the correct long side: ";
        std::cin >> param;
    }
}

double perimeter(double side[])
{
    double p = 0;
    for(int i = 0; i < 3; ++i)
    {
        p+=side[i];
    }
    return p;
}

Triangle::Triangle() : Shape("Triangle")
{
    std::cout << "Enter the parameters of the " << typeFigure << " shape." << std::endl;

    for(int i =0; i < 3; ++i)
    {
        std::cout << "The " << i << " side = ";
        std::cin >> side[i];
        checkSide(side[i]);
    }

    double p = perimeter(side) / 2;

    box.width = (side[0] * side[1] * side[2]) /
                 (4 * sqrt(p * (p - side[0]) * (p - side[1]) * (p - side[2]))) * 2;
    box.height = box.width;
}

double Triangle::square()
{
    double p = perimeter(side) / 2;
    return sqrt(p * (p - side[0]) * (p - side[1]) * (p - side[2]));
}

BoundingBoxDimension Triangle::dimensions()
{
    return box;
}

std::string Triangle::type()
{
    return typeFigure;
}
