#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
protected:
    double length, width;

public:
    Rectangle(double l, double w, string n = "Rectangle");

    void calcArea() override;

    void setLength(double l);
    void setWidth(double w);
};

#endif