#include "wolf.h"
#include "case.h"

Wolf::Wolf(string side, Case &_case)
{
    side_ = side;
    strength_ = _case.strength_of_wolf_;

    if (side_ == "red") {
        index_ = _case.red_headquarter_.num_of_warriors_;
        static_num_in_red_headquarter_++;
        num_in_red_headquarter_ = static_num_in_red_headquarter_;
    } else {
        index_ = _case.blue_headquarter_.num_of_warriors_;
        static_num_in_blue_headquarter_++;
        num_in_blue_headquarter_ = static_num_in_blue_headquarter_;
    }
}

void Wolf::printCondition() {
    if (side_ == "red") {
        cout << " red wolf " << index_ << " born with strength "
             << strength_ << ", " << num_in_red_headquarter_
             << " wolf in red headquater" << endl;
    } else {
        cout << " blue wolf " << index_ << " born with strength "
             << strength_ << ", " << num_in_blue_headquarter_
             << " wolf in blue headquater" << endl;
    }
}

int Wolf::static_num_in_red_headquarter_ = 0;

int Wolf::static_num_in_blue_headquarter_ = 0;
