#ifndef DRAGON_H
#define DRAGON_H

#include "warrior.h"
class Case;

class Dragon: public Warrior
{
public:
    Dragon(string side, Case &_case);
    virtual void printCondition();
    static int static_num_in_red_headquarter_;
    static int static_num_in_blue_headquarter_;
private:
    string weapon_;
    double morale_;
};

#endif // DRAGON_H
