#pragma once
#include "shape.h"

class Triangle : public Shape
{
    double side[3];
public:
    Triangle();
    double square() override;
    BoundingBoxDimension dimensions() override;
    std::string type() override;
};
