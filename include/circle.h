#pragma once
#include "shape.h"

class Circle : public Shape
{
    double radius;
public:
    Circle();
    double square() override;
    BoundingBoxDimension dimensions() override;
    std::string type() override;
};
