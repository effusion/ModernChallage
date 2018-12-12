#include <iostream>
#include <memory>
#include <sstream>
#include "ch1/Problem1.h"
#include "ch1/Problem2.h"
#include "ch1/Problem3.h"
#include "ch1/Problem4.h"
#include "ch1/Problem5.h"
#include "ch1/Problem6.h"
#include "ch1/Problem7.h"
#include "ch1/Problem8.h"

using namespace std;

int main() {


    unique_ptr<Problem8> prob1_ptr (new Problem8);
    prob1_ptr-> printArmstrongNumbers();

    return 0;
}