#ifndef PACKAGE_H
#define PACKAGE_H

#include "Customer.h"

class Package {

public:
        Package(){
                
        oz = 5.00;
        costPerOunce = 5.00;

        }
        Package(double, double, Customer, Customer);
        double calculateCost();
        bool inRange(double, double, double);
        void printCustomer();
        static void printSummaryInfo();
        static int nTwoDays;
        static int nOverNights;
        static double tdProfit;
        static double onProfit;
        
protected:
        Customer send;
        Customer rec;
        double oz;
        double costPerOunce;

};

#endif

