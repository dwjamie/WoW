#ifndef CASE_H
#define CASE_H

#include "headquarter.h"
using namespace std;

class Case
{
public:
    Case();
    void setCase();
    void printCase();
private:
    Headquarter red_headquarter_;
    Headquarter blue_headquarter_;

    int strength_of_dragon_;
    int strength_of_ninja_;
    int strength_of_iceman_;
    int strength_of_lion_;
    int strength_of_wolf_;

    friend class Dragon;
    friend class Ninja;
    friend class Iceman;
    friend class Lion;
    friend class Wolf;
};

#endif // CASE_H
