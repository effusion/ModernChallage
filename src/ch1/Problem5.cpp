//
// Created by heuby on 22/11/18.
//

#include <iostream>
#include "Problem5.h"

using namespace std;

void Problem5::FindSexyPrime() {
    auto limit = 0;
    cout << "Enter limit: ";
    cin >> limit;

    for (int i= 5; i < limit; ++i) {
        if(IsPrime(i) && IsPrime(i + 6)){
            cout << "Found sexy primes : " << i << " and " << i + 6 << endl;
        }

    }
}

bool Problem5::IsPrime(int num) {
    if(num <= 3){
        return num > 1;
    }else if (num % 2 == 0 || num % 3 == 0){
        return false;
    }else{
        for (int i = 5; i * i <= num ; i +=6) {
            if(num % i == 0 || num % (i +2) == 0){
                return false;
            }
        }
        return true;
    }
}