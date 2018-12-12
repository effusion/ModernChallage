//
// Created by heuby on 22/11/18.
//

#include <iostream>
#include <cmath>
#include "Problem6.h"


using namespace  std;

void Problem6::FindAbuntantNumbers() {
    auto limit = 0;
    cout << "Upper limit: ";
    cin  >> limit;
    for (auto i = 10; i < limit; ++i) {
        IsAbunantNumber(i);

    }


}

void Problem6::IsAbunantNumber(int number) {
    auto sum = 1;
    for(auto i = 2 ; i <= sqrt(number); i++){
        if(number % i == 0){
            sum += (i == (number / i)) ? i : (i + number / i);
        }
    }
    if(sum > number){
        cout << "Abundant number: " << number << "\tAbundanz: " << sum - number << endl;
    }
}
