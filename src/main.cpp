#include <iostream>
#include <queue>
#include <cmath>
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

enum CHOICEFIGURE
{
    CIRCLE = 1,
    RECTANGLE = 2,
    TRIANGLE = 4,
};

void printParams(Shape *shape)
{
    for(int i =0; i < 40; ++i)
        std::cout << "=";

    std::cout << "\nType: " << shape->type() << std::endl;
    std::cout << "Square: " << shape->square() << std::endl;
    BoundingBoxDimension box = shape->dimensions();
    std::cout << "Dimensions of the descriding rectangle: " << std::endl;
    std::cout << "Width = " << box.width << std::endl;
    std::cout << "Height = " << box.height << std::endl;
    std::cout << "Center coordinate: " << std::endl;
    CenterCoordinate center = shape->coordinate();
    std::cout << "x = " << center.x << " y = " << center.y << std::endl << std::endl;
}

int main()
{
    std::queue<Shape*> shapes;
    std::cout << "The program interface shape" << std::endl;

    while(true)
    {
        for(int i = 0; i < 40; ++i)
            std::cout << "-";
        int choice;
        std::cout << "\nList figure: " << std::endl;
        std::cout << "Circle - 0 " << std::endl;
        std::cout << "Rectangle - 1" << std::endl;
        std::cout << "Triangle - 2" << std::endl;
        std::cout << "Exet - -1" << std::endl;
        std::cout << "Enter the shape number: ";
        std::cin >> choice;
        if(choice == -1)
            break;

        if(pow(2, choice) == CHOICEFIGURE::CIRCLE)
            shapes.push(new Circle);
        else if(pow(2, choice) == CHOICEFIGURE::RECTANGLE)
            shapes.push(new Rectangle);
        else if(pow(2, choice) == CHOICEFIGURE::TRIANGLE)
            shapes.push(new Triangle);
        std::cout << std::endl;
    }

    std::cout <<"\n Results: " <<std::endl;

    while(!shapes.empty())
    {
        printParams(shapes.front());
        delete shapes.front();
        shapes.pop();
    }

    return 0;
}
