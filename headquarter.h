#ifndef HEADQUARTER_H
#define HEADQUARTER_H

#include <vector>
#include "warrior.h"

using namespace std;

class Headquarter
{
public:
    Headquarter();
    int strength_;
    int num_of_warriors_;
    Warrior **warrior_;
    ~Headquarter();
};

#endif // HEADQUARTER_H
