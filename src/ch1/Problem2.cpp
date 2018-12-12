//
// Created by heuby on 22/11/18.
//

#include <iostream>
#include "Problem2.h"


using namespace std;

void Problem2::gcd(int a, int b) {
    cout << "Calculate GCD of a: " << a << " and b: " << b << endl;
    auto gcd = 0;
    do{
        gcd = a % b;
        a = b;
        b = gcd;
    }while (gcd != 0);

    cout << "GCD: is: " << a << endl;

}
