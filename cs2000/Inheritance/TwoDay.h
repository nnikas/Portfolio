#ifndef TWODAY_H
#define OVERNIGHT_H

#include "Package.h"

class TwoDay: public Package {

public:
        TwoDay(){

        ffee = 5.00;
        
                
        }
        TwoDay(double, double, double, Customer, Customer);
        double calculateCost();
        void print();
private:
        double ffee;
};

#endif