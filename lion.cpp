#include "lion.h"
#include "case.h"

Lion::Lion(string side, Case &_case)
{
    side_ = side;
    strength_ = _case.strength_of_lion_;

    if (side_ == "red") {
        index_ = _case.red_headquarter_.num_of_warriors_;
        static_num_in_red_headquarter_++;
        num_in_red_headquarter_ = static_num_in_red_headquarter_;
        loyalty_ = _case.red_headquarter_.strength_;
    } else {
        index_ = _case.blue_headquarter_.num_of_warriors_;
        static_num_in_blue_headquarter_++;
        num_in_blue_headquarter_ = static_num_in_blue_headquarter_;
        loyalty_ = _case.blue_headquarter_.strength_;
    }
}

void Lion::printCondition() {
    if (side_ == "red") {
        cout << " red lion " << index_ << " born with strength "
             << strength_ << ", " << num_in_red_headquarter_
             << " lion in red headquater" << endl;
    } else {
        cout << " blue lion " << index_ << " born with strength "
             << strength_ << ", " << num_in_blue_headquarter_
             << " lion in blue headquater" << endl;
    }
    cout << "Its loyalty is " << loyalty_ << endl;
}

int Lion::static_num_in_red_headquarter_ = 0;

int Lion::static_num_in_blue_headquarter_ = 0;
