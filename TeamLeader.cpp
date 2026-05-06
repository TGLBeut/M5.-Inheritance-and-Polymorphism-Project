#include "TeamLeader.h"
#include <iostream>

using namespace std;

TeamLeader::TeamLeader(string n, int num, string date,
    int s, double rate,
    double bonus,
    int reqHours,
    int attHours)
    : ProductionWorker(n, num, date, s, rate) {

    monthlyBonus = bonus;
    requiredTrainingHours = reqHours;
    attendedTrainingHours = attHours;
}

void TeamLeader::setMonthlyBonus(double bonus) {
    monthlyBonus = bonus;
}

void TeamLeader::setReqTrainingHours(int reqHours) {
    requiredTrainingHours = reqHours;
}

void TeamLeader::setAttendedTrainingHours(int attHours) {
    attendedTrainingHours = attHours;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

int TeamLeader::getReqTrainingHours() const {
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}

void TeamLeader::showTeamLeader() const {
    showProductionWorker();
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}