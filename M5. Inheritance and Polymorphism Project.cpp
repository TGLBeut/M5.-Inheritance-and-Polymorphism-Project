//M5. Inheritance and Polymorphism Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer: Sean Greene
//Date: 16/04/2026
//Project: Inheritance Hierarchy Program 1
//Requirements: Create an inheritance hierarchy for employees.

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

using namespace std;

int main() {

    string name, hireDate;
    int empNum, shift;
    double payRate;

    while (true) {
        try {
            cout << "\nEnter name: ";
            cin >> name;

            cout << "Enter employee number (0–9999): ";
            cin >> empNum;

            cout << "Enter hire date: ";
            cin >> hireDate;

            cout << "Enter shift (1 = day, 2 = night): ";
            cin >> shift;

            cout << "Enter pay rate: ";
            cin >> payRate;

            ProductionWorker pw(name, empNum, hireDate, shift, payRate);

            cout << "\nEmployee created successfully!\n";
            break;
        }
        catch (Employee::InvalidEmployeeNumber) {
            cout << "Error: Employee number must be 0–9999\n";
        }
        catch (ProductionWorker::InvalidShift) {
            cout << "Error: Shift must be 1 or 2\n";
        }
        catch (ProductionWorker::InvalidPayRate) {
            cout << "Error: Pay rate cannot be negative\n";
        }
    }

    cout << "\n====================================\n";
    cout << "Factory Workers Inheritance Project\n";
    cout << "====================================\n";

    cout << "\n-Employee-\n";

    try {
        Employee emp("John Doe", 1234, "1/1/2020");
        emp.showEmployee();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Invalid employee number for Employee\n";
    }

    cout << "\n-Production Worker-\n";

    try {
        ProductionWorker pw2("Jane Smith", 4567, "3/5/2021", 1, 20);
        pw2.showProductionWorker();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Invalid employee number for ProductionWorker\n";
    }
    catch (ProductionWorker::InvalidShift) {
        cout << "Invalid shift for ProductionWorker\n";
    }
    catch (ProductionWorker::InvalidPayRate) {
        cout << "Invalid pay rate for ProductionWorker\n";
    }

    cout << "\n-Shift Supervisor-\n";

    try {
        ShiftSupervisor ss("Bob Brown", 7890, "6/10/2019", 55000, 2500);
        ss.showShiftSupervisor();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Invalid employee number for ShiftSupervisor\n";
    }

    cout << "\n-Team Leader-\n";

    try {
        TeamLeader tl("Alice Green", 101, "8/15/2022", 2, 22, 300, 40, 35);
        tl.showTeamLeader();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Invalid employee number for TeamLeader\n";
    }
    catch (ProductionWorker::InvalidShift) {
        cout << "Invalid shift for TeamLeader\n";
    }
    catch (ProductionWorker::InvalidPayRate) {
        cout << "Invalid pay rate for TeamLeader\n";
    }

    cin.clear();
    cin.ignore(1000, '\n');

    return 0;
}