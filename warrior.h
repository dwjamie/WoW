#ifndef WARRIOR_H
#define WARRIOR_H

#include "wow.h"

class Warrior
{
public:
    Warrior();
    string side_;
    int index_;
    int strength_;
    int num_in_red_headquarter_;
    int num_in_blue_headquarter_;
    virtual void printCondition();
    virtual ~Warrior() {}
};

#endif // WARRIOR_H
