//M5. Inheritance and Polymorphism Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer: Sean Greene
//Date: 16/04/2026
//Project: Inheritance Hierarchy Program 1
//Requirements: Create an inheritance hierarchy for employees.

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

using namespace std;

int main() {
	cout << "Inheritance and Polymorphism Project\n" << endl;

    cout << "-Employee-\n" << endl;
    Employee emp("John Doe", "123-A", "1/1/2020");
    emp.showEmployee();

    cout << "\n-Production Worker-\n" << endl;
    ProductionWorker pw("Jane Smith", "456-B", "3/5/2021", 1, 20);
    pw.showProductionWorker();

    cout << "\n-Shift Supervisor-\n" << endl;
    ShiftSupervisor ss("Bob Brown", "789-C", "6/10/2019", 55000, 2500);
    ss.showShiftSupervisor();

    cout << "\n-Team Leader-\n" << endl;
    TeamLeader tl("Alice Green", "101-D", "8/15/2022", 2, 22, 300, 40, 35);
    tl.showTeamLeader();

    return 0;
}