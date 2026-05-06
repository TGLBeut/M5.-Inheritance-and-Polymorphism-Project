#include "ShiftSupervisor.h"
#include <iostream>

using namespace std;

ShiftSupervisor::ShiftSupervisor(string n, int num, string date, double sal, double bon)
    : Employee(n, num, date) {
    salary = sal;
    bonus = bon;
}

void ShiftSupervisor::setSalary(double sal) {
    salary = sal;
}

void ShiftSupervisor::setBonus(double bon) {
    bonus = bon;
}

double ShiftSupervisor::getSalary() const {
    return salary;
}

double ShiftSupervisor::getBonus() const {
    return bonus;
}

void ShiftSupervisor::showShiftSupervisor() const {
    showEmployee();
    cout << "Salary: $" << salary << endl;
    cout << "Bonus: $" << bonus << endl;
}