#include "ninja.h"
#include "case.h"

Ninja::Ninja(string side, Case &_case)
{
    side_ = side;
    strength_ = _case.strength_of_ninja_;

    if (side_ == "red") {
        index_ = _case.red_headquarter_.num_of_warriors_;
        static_num_in_red_headquarter_++;
        num_in_red_headquarter_ = static_num_in_red_headquarter_;
        weapon_1_ = weapon[index_ % 3];
        weapon_2_ = weapon[(index_ + 1) % 3];
    } else {
        index_ = _case.blue_headquarter_.num_of_warriors_;
        static_num_in_blue_headquarter_++;
        num_in_blue_headquarter_ = static_num_in_blue_headquarter_;
        weapon_1_ = weapon[index_ % 3];
        weapon_2_ = weapon[(index_ + 1) % 3];
    }
}

void Ninja::printCondition() {
    if (side_ == "red") {
        cout << " red ninja " << index_ << " born with strength "
             << strength_ << ", " << num_in_red_headquarter_
             << " ninja in red headquater" << endl;
    } else {
        cout << " blue ninja " << index_ << " born with strength "
             << strength_ << ", " << num_in_blue_headquarter_
             << " ninja in blue headquater" << endl;
    }
    cout << "It has a " << weapon_1_ << " and a " << weapon_2_ << endl;
}

int Ninja::static_num_in_red_headquarter_ = 0;

int Ninja::static_num_in_blue_headquarter_ = 0;
