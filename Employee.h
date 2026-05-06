#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    Employee(string n = "", int num = 0, string date = "");

    class InvalidEmployeeNumber {};

    void setName(string n);
    void setEmployeeNumber(int num);
    void setHireDate(string date);

    string getName() const;
    int getEmployeeNumber() const;
    string getHireDate() const;

    void showEmployee() const;
};

#endif