#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    ProductionWorker(string n = "", int num = 0, string date = "",
        int s = 1, double rate = 0.0);

    void setShift(int s);
    void setPayRate(double rate);

    int getShift() const;
    double getPayRate() const;

    void showProductionWorker() const;

    class InvalidShift {};
    class InvalidPayRate {};
};

#endif