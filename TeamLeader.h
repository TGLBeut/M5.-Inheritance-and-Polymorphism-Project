#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    TeamLeader(string n, string num, string date, int s, double rate,
        double bonus, int reqHours, int attHours);

    void showTeamLeader() const;
};

#endif