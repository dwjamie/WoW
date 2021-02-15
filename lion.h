#ifndef LION_H
#define LION_H

#include "warrior.h"
class Case;

class Lion: public Warrior
{
public:
    Lion(string side, Case &_case);
    virtual void printCondition();
    static int static_num_in_red_headquarter_;
    static int static_num_in_blue_headquarter_;
private:
    int loyalty_;
};

#endif // LION_H
