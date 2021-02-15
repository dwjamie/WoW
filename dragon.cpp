#include "dragon.h"
#include "case.h"
#include <iomanip>

Dragon::Dragon(string side, Case &_case)
{
    side_ = side;
    strength_ = _case.strength_of_dragon_;

    if (side_ == "red") {
        index_ = _case.red_headquarter_.num_of_warriors_;
        static_num_in_red_headquarter_++;
        num_in_red_headquarter_ = static_num_in_red_headquarter_;
        weapon_ = weapon[index_ % 3];
        morale_ = static_cast<int>(0.5 + 100 * static_cast<double>(_case.red_headquarter_.strength_) / _case.strength_of_dragon_) / 100.0;
    } else {
        index_ = _case.blue_headquarter_.num_of_warriors_;
        static_num_in_blue_headquarter_++;
        num_in_blue_headquarter_ = static_num_in_blue_headquarter_;
        weapon_ = weapon[index_ % 3];
        morale_ = static_cast<int>(0.5 + 100 * static_cast<double>(_case.blue_headquarter_.strength_) / _case.strength_of_dragon_) / 100.0;
    }
}

void Dragon::printCondition() {
    if (side_ == "red") {
        cout << " red dragon " << index_ << " born with strength "
             << strength_ << ", " << num_in_red_headquarter_
             << " dragon in red headquater" << endl;
    } else {
        cout << " blue dragon " << index_ << " born with strength "
             << strength_ << ", " << num_in_blue_headquarter_
             << " dragon in blue headquater" << endl;
    }
    cout<< fixed << setprecision(2);
    cout << "It has a " << weapon_ << ", and its morale is " << morale_ << endl;
}

int Dragon::static_num_in_red_headquarter_ = 0;

int Dragon::static_num_in_blue_headquarter_ = 0;
