#include "case.h"
#include "all_kinds_of_warriors.h"

Case::Case() {
    strength_of_dragon_ = 0;
    strength_of_ninja_ = 0;
    strength_of_iceman_ = 0;
    strength_of_lion_ = 0;
    strength_of_wolf_ = 0;
}

void Case::setCase() {
    cin >> red_headquarter_.strength_ >> strength_of_dragon_ >> strength_of_ninja_ >>
           strength_of_iceman_ >> strength_of_lion_ >> strength_of_wolf_;

    blue_headquarter_.strength_ = red_headquarter_.strength_;

    int min_strength_of_warriors = min(strength_of_dragon_, strength_of_ninja_,
                                       strength_of_iceman_, strength_of_lion_, strength_of_wolf_);

    while (red_headquarter_.strength_ >= min_strength_of_warriors) {
        if (red_headquarter_.strength_ >= strength_of_iceman_) {
            red_headquarter_.strength_ -= strength_of_iceman_;
            red_headquarter_.num_of_warriors_++;

            Iceman *iceman = new Iceman("red", *this);
            red_headquarter_.warrior_[red_headquarter_.num_of_warriors_] = iceman;
        }

        if (red_headquarter_.strength_ >= strength_of_lion_) {
            red_headquarter_.strength_ -= strength_of_lion_;
            red_headquarter_.num_of_warriors_++;

            Lion *lion = new Lion("red", *this);
            red_headquarter_.warrior_[red_headquarter_.num_of_warriors_] = lion;
        }

        if (red_headquarter_.strength_ >= strength_of_wolf_) {
            red_headquarter_.strength_ -= strength_of_wolf_;
            red_headquarter_.num_of_warriors_++;

            Wolf *wolf = new Wolf("red", *this);
            red_headquarter_.warrior_[red_headquarter_.num_of_warriors_] = wolf;
        }

        if (red_headquarter_.strength_ >= strength_of_ninja_) {
            red_headquarter_.strength_ -= strength_of_ninja_;
            red_headquarter_.num_of_warriors_++;

            Ninja *ninja = new Ninja("red", *this);
            red_headquarter_.warrior_[red_headquarter_.num_of_warriors_] = ninja;
        }
        if (red_headquarter_.strength_ >= strength_of_dragon_) {           
            red_headquarter_.strength_ -= strength_of_dragon_;
            red_headquarter_.num_of_warriors_++;

            Dragon *dragon = new Dragon("red", *this);
            red_headquarter_.warrior_[red_headquarter_.num_of_warriors_] = dragon;
        }
    }

    while (blue_headquarter_.strength_ >= min_strength_of_warriors) {       
        if (blue_headquarter_.strength_ >= strength_of_lion_) {            
            blue_headquarter_.strength_ -= strength_of_lion_;
            blue_headquarter_.num_of_warriors_++;

            Lion *lion = new Lion("blue", *this);
            blue_headquarter_.warrior_[blue_headquarter_.num_of_warriors_] = lion;
        }

        if (blue_headquarter_.strength_ >= strength_of_dragon_) {            
            blue_headquarter_.strength_ -= strength_of_dragon_;
            blue_headquarter_.num_of_warriors_++;

            Dragon *dragon = new Dragon ("blue", *this);
            blue_headquarter_.warrior_[blue_headquarter_.num_of_warriors_] = dragon;
        }

        if (blue_headquarter_.strength_ >= strength_of_ninja_) {            
            blue_headquarter_.strength_ -= strength_of_ninja_;
            blue_headquarter_.num_of_warriors_++;

            Ninja *ninja = new Ninja("blue", *this);
            blue_headquarter_.warrior_[blue_headquarter_.num_of_warriors_] = ninja;
        }

        if (blue_headquarter_.strength_ >= strength_of_iceman_) {            
            blue_headquarter_.strength_ -= strength_of_iceman_;
            blue_headquarter_.num_of_warriors_++;

            Iceman *iceman = new Iceman("blue", *this);
            blue_headquarter_.warrior_[blue_headquarter_.num_of_warriors_] = iceman;
        }

        if (blue_headquarter_.strength_ >= strength_of_wolf_) {           
            blue_headquarter_.strength_ -= strength_of_wolf_;
            blue_headquarter_.num_of_warriors_++;

            Wolf *wolf = new Wolf("blue", *this);
            blue_headquarter_.warrior_[blue_headquarter_.num_of_warriors_] = wolf;
        }
    }
}

void Case::printCase() {
    if (red_headquarter_.num_of_warriors_ <= blue_headquarter_.num_of_warriors_) {
        for (int j = 1; j <= red_headquarter_.num_of_warriors_; j++) {
            printHour(j - 1);
            red_headquarter_.warrior_[j]->printCondition();
            printHour(j - 1);
            blue_headquarter_.warrior_[j]->printCondition();
        }

        printHour(red_headquarter_.num_of_warriors_);
        cout << " red headquarter stops making warriors" << endl;

        for (int j = red_headquarter_.num_of_warriors_ + 1; j <= blue_headquarter_.num_of_warriors_; j++) {
            printHour(j - 1);
            blue_headquarter_.warrior_[j]->printCondition();
        }

        printHour(blue_headquarter_.num_of_warriors_);
        cout << " blue headquarter stops making warriors" << endl;   
    } else {
        for (int j = 1; j <= blue_headquarter_.num_of_warriors_; j++) {
            printHour(j - 1);
            red_headquarter_.warrior_[j]->printCondition();
            printHour(j - 1);
            blue_headquarter_.warrior_[j]->printCondition();
        }

        printHour(blue_headquarter_.num_of_warriors_);
        red_headquarter_.warrior_[blue_headquarter_.num_of_warriors_ + 1]->printCondition();

        printHour(blue_headquarter_.num_of_warriors_);
        cout << " blue headquarter stops making warriors" << endl;

        for (int j = blue_headquarter_.num_of_warriors_ + 2; j <= red_headquarter_.num_of_warriors_; j++) {
            printHour(j - 1);
            red_headquarter_.warrior_[j]->printCondition();
        }

        printHour(red_headquarter_.num_of_warriors_);
        cout << " red headquarter stops making warriors" << endl;
    }
}
