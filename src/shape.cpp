#include "shape.h"
#include <iostream>

Shape::Shape(const std::string& typeFigure)
{
    this->typeFigure = typeFigure;
    std::cout << "Enter the coordinate center of the " << this->typeFigure << " shape:" << std::endl;
    std::cout << "x = ";
    std::cin >> center.x;
    std::cout << "y = ";
    std::cin >> center.y;
}

CenterCoordinate Shape::coordinate()
{
    return center;
}
