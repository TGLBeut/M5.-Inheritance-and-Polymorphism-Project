#include "TeamLeader.h"

TeamLeader::TeamLeader(string n, string num, string date, int s, double rate, double bonus, int reqHours, int attHours)
    : ProductionWorker(n, num, date, s, rate) {
    monthlyBonus = bonus;
    requiredTrainingHours = reqHours;
    attendedTrainingHours = attHours;
}

void TeamLeader::showTeamLeader() const {
    showProductionWorker();
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}