#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

class ShiftSupervisor : public Employee {
private:
    double salary;
    double bonus;

public:
    ShiftSupervisor(string n = "", int num = 0, string date = "",
        double sal = 0.0, double bon = 0.0);

    void setSalary(double sal);
    void setBonus(double bon);

    double getSalary() const;
    double getBonus() const;

    void showShiftSupervisor() const;
};

#endif