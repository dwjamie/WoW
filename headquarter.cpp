#include "headquarter.h"

Headquarter::Headquarter() {
    strength_ = 0;
    num_of_warriors_ = 0;
    warrior_ = new Warrior *[1000];
    for (int i = 0; i <= 1000; i++) {
        warrior_[i] = new Warrior;
    }
}

Headquarter::~Headquarter() {
    for (int i = 0; i <= 1000; i++) {
        delete warrior_[i];
        warrior_[i] = nullptr;
    }
    delete warrior_;
    warrior_ = nullptr;
}
