#ifndef NINJA_H
#define NINJA_H

#include "warrior.h"
class Case;

class Ninja: public Warrior
{
public:
    Ninja(string side, Case &_case);
    virtual void printCondition();
    static int static_num_in_red_headquarter_;
    static int static_num_in_blue_headquarter_;
private:
    string weapon_1_;
    string weapon_2_;
};

#endif // NINJA_H
