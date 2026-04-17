#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape {
private:
    double xCenter, yCenter, radius;

public:
    Circle(double x, double y, double r, string n = "Circle");

    void calcArea() override;

    void setRadius(double r);
    double getRadius() const;
};

#endif