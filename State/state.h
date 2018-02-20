#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class CombinationLock
{
private:
    vector<int> combination;
public:
    string status;

    CombinationLock(const vector<int> &combination)
        : combination(combination) {
        status = "LOCKED";
    }

    void enter_digit(int digit)
    {
        if (status == "LOCKED") {
            status.clear();
        }
        if (digit != combination.at(status.size())) {
            status = "ERROR";
            return;
        }

        status += to_string(digit);

        if (status.size() == combination.size()) {
            status = "OPEN";
        }
    }
};

#endif // STATE_H
