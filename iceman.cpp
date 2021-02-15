#include "iceman.h"
#include "case.h"

Iceman::Iceman(string side, Case &_case)
{
    side_ = side;
    strength_ = _case.strength_of_iceman_;

    if (side_ == "red") {
        index_ = _case.red_headquarter_.num_of_warriors_;
        static_num_in_red_headquarter_++;
        num_in_red_headquarter_ = static_num_in_red_headquarter_;
        weapon_ = weapon[index_ % 3];
    } else {
        index_ = _case.blue_headquarter_.num_of_warriors_;
        static_num_in_blue_headquarter_++;
        num_in_blue_headquarter_ = static_num_in_blue_headquarter_;
        weapon_ = weapon[index_ % 3];
    }
}

void Iceman::printCondition() {
    if (side_ == "red") {
        cout << " red iceman " << index_ << " born with strength "
             << strength_ << ", " << num_in_red_headquarter_
             << " iceman in red headquater" << endl;
    } else {
        cout << " blue iceman " << index_ << " born with strength "
             << strength_ << ", " << num_in_blue_headquarter_
             << " iceman in blue headquater" << endl;
    }
    cout << "It has a " << weapon_ << endl;
}

int Iceman::static_num_in_red_headquarter_ = 0;

int Iceman::static_num_in_blue_headquarter_ = 0;
