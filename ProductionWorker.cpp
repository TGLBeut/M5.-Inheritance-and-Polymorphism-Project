#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(string n, string num, string date, int s, double rate)
    : Employee(n, num, date) {
    shift = s;
    hourlyPayRate = rate;
}

void ProductionWorker::setShift(int s) 
{ shift = s; }

void ProductionWorker::setPayRate(double rate) 
{ hourlyPayRate = rate; }

int ProductionWorker::getShift() const 
{ return shift; }

double ProductionWorker::getPayRate() const 
{ return hourlyPayRate; }

void ProductionWorker::showProductionWorker() const {
    showEmployee();
    cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}