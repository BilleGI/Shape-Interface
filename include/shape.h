#pragma once
#include <string>

struct BoundingBoxDimension
{
    double width;
    double height;
};
struct CenterCoordinate
{
    double x;
    double y;
};

class Shape
{
    protected:
    std::string typeFigure;
    BoundingBoxDimension box;
    CenterCoordinate center;
public:
    Shape(const std::string& typeFigure);
    virtual ~Shape() = default;
    virtual double square() = 0;
    virtual BoundingBoxDimension dimensions() = 0;
    CenterCoordinate coordinate();
    virtual std::string type() = 0;
};
