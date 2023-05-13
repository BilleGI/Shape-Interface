#include "circle.h"
#include <iostream>

Circle::Circle() : Shape("Circle")
{
    std::cout << "Enter the radius " << typeFigure << ": ";

    while(true)
    {
        std::cin >> radius;
        if(radius > 0)
            break;
        std::cout << "Enter the correct radius: ";
    }

    box.height = radius + radius;
    box.width = radius + radius;
}

double Circle::square()
{
    return (3.14*radius*radius);
}

BoundingBoxDimension Circle::dimensions()
{
    return box;
}

std::string Circle::type()
{
    return typeFigure;
}
