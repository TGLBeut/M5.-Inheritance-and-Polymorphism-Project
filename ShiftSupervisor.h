#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double salary;
    double bonus;

public:
    ShiftSupervisor(string n, string num, string date, double sal, double bon);

    void setSalary(double sal);
    void setBonus(double bon);

    double getSalary() const;
    double getBonus() const;

    void showShiftSupervisor() const;
};

#endif