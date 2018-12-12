//
// Created by heuby on 11/12/18.
//

#include "Problem8.h"

void Problem8::printArmstrongNumbers() {
    for (int i = 0; i < 1000; ++i) {

    }
}

int Problem8::getLenghtOfInt(int n) {
    auto number_of_digits = 0;

    do {
        ++number_of_digits;
        n /= 10;
    } while (n);
    return number_of_digits;
}
