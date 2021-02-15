#include <iostream>
#include "case.h"
#include "all_kinds_of_warriors.h"
using namespace std;

int main() {
    int num_of_cases;
    cin >> num_of_cases;

    Case *_case = new Case[100];

    for (int i = 1; i <= num_of_cases; i++) {
        _case[i].setCase();
        clearRecords();
    }

    for (int i = 1; i <= num_of_cases; i++) {
        cout << "Case:" << i << endl;
        _case[i].printCase();
    }

    delete [] _case;

    return 0;
}

