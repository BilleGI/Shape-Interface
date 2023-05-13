#include "rectangle.h"
#include <iostream>

void check(double& parametr)
{
    while(parametr <= 0)
    {
        std::cout << "Enter the correct paramter: ";
        std::cin >> parametr;
    }
}

Rectangle::Rectangle() : Shape("Rectangle")
{
    std::cout << "Enter the patameters of the " << typeFigure << " shape." << std::endl;
    std::cout << "Width = ";
    std::cin >> width;
    check(width);
    std::cout << "Height = ";
    std::cin >> height;
    check(height);

    box.width = width;
    box.height = height;
}

double Rectangle::square()
{
    return width*height;
}

BoundingBoxDimension Rectangle::dimensions()
{
    return box;
}

std::string Rectangle::type()
{
    return typeFigure;
}
