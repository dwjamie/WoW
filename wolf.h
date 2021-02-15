#ifndef WOLF_H
#define WOLF_H

#include "warrior.h"
class Case;

class Wolf: public Warrior
{
public:
    Wolf(string side, Case &_case);
    virtual void printCondition();
    static int static_num_in_red_headquarter_;
    static int static_num_in_blue_headquarter_;
};

#endif // WOLF_H
