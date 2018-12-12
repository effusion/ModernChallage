//
// Created by heuby on 22/11/18.
//


#include <iostream>
#include <numeric>
#include "Problem3.h"

using namespace std;

void Problem3::lcd(int a, int b) {
    auto h = gcd(a,b);
    auto lcd = h ? (a * (b / h)): 0;
    cout << "lcd: " << lcd << endl;


}
