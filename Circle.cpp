#include "Circle.h"
#define PI 3.14159

Circle::Circle(double x, double y, double r, string n) {
    xCenter = x;
    yCenter = y;
    radius = r;
    setName(n);
    calcArea();
}

void Circle::calcArea() {
    setArea(PI * radius * radius);
}

void Circle::setRadius(double r) {
    radius = r;
    calcArea();
}


double Circle::getRadius() const { return radius; }