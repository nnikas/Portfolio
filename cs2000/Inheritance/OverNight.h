#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"

class OverNight: public Package {

public:
        OverNight(){

        addfee = 2.75;

        }
        OverNight(double, double, double, Customer, Customer);
        double calculateCost();
        void print();

private:
        double addfee;
};

#endif