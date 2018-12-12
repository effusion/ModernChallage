//
// Created by heuby on 23/11/18.
//

#include <cmath>
#include <iostream>
#include "Problem7.h"

using namespace std;

void Problem7::PrintAmicableNumbers() {

    for (int i = 220; i < 1000000; ++i) {
        auto probableFriend = CalculateDivisorSum(i);
        auto sum = CalculateDivisorSum(probableFriend);
        if(i == sum) {
            cout << "Friend pair found: " << i << "," << probableFriend << endl;
        }
    }
}

int Problem7::CalculateDivisorSum(int number) {
    auto sum = 1;
    for(auto i = 2 ; i <= sqrt(number); i++){
        if(number % i == 0){
            sum += (i == (number / i)) ? i : (i + number / i);
        }
    }
    return sum;
}

