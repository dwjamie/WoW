#ifndef ICEMAN_H
#define ICEMAN_H

#include "warrior.h"
class Case;

class Iceman: public Warrior
{
public:
    Iceman(string side, Case &_case);
    virtual void printCondition();
    static int static_num_in_red_headquarter_;
    static int static_num_in_blue_headquarter_;
private:
    string weapon_;
};

#endif // ICEMAN_H
