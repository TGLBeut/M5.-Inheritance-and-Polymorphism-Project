#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"
#include <string>
#include <iostream>
using namespace std;

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    TeamLeader(string n = "", int num = 0, string date = "",
        int s = 1, double rate = 0.0,
        double bonus = 0.0,
        int reqHours = 0,
        int attHours = 0);

    void setMonthlyBonus(double bonus);
    void setReqTrainingHours(int reqHours);
    void setAttendedTrainingHours(int attHours);

    double getMonthlyBonus() const;
    int getReqTrainingHours() const;
	int getAttendedTrainingHours() const;

    void showTeamLeader() const;
};

#endif