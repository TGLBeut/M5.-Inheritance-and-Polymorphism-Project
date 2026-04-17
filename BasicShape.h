#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape {
private:
    double area;
    string name;

public:
    virtual void calcArea() = 0;

    void setArea(double a) { area = a; }
    double getArea() const { return area; }

    void setName(string n) { name = n; }
    string getName() const { return name; }

    virtual ~BasicShape() {}
};

#endif