#pragma once
#include "shape.h"

class Rectangle : public Shape
{
    double width;
    double height;
public:
    Rectangle();
    double square() override;
    BoundingBoxDimension dimensions() override;
    std::string type() override;
};
