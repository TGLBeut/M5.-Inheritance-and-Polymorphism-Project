#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(string n, int num, string date, int s, double rate)
    : Employee(n, num, date) {
    setShift(s);
    setPayRate(rate);
}

void ProductionWorker::setShift(int s) {
if (s != 1 && s != 2) {
        throw InvalidShift();
}
shift = s;
}

void ProductionWorker::setPayRate(double rate) {
if (rate < 0) {
        throw InvalidPayRate();
}
hourlyPayRate = rate;
}

int ProductionWorker::getShift() const {
return shift;
}

double ProductionWorker::getPayRate() const {
return hourlyPayRate;
}

void ProductionWorker::showProductionWorker() const {
    showEmployee();
    cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}