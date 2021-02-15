#include "wow.h"

const string weapon[3] = {"sword", "bomb", "arrow"};

void printHour(int n) {
    if (n < 10) {
        cout << 0 << 0 << n;
    } else if (n < 100) {
        cout << 0 << n;
    } else {
        cout << n;
    }
}

int min(int n1, int n2, int n3, int n4, int n5) {
    int tmp;
    tmp = n1 < n2 ? n1 : n2;
    if(n3 < tmp) {
        tmp = n3;
    }
    if(n4 < tmp) {
        tmp = n4;
    }
    if(n5 < tmp) {
        tmp = n5;
    }
    return tmp;
}
