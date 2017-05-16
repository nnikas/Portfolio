#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;

class Customer {

        friend istream &operator>>(istream&, Customer&);
        friend ostream &operator<<(ostream&, const Customer&);

public:
        Customer ();

private:
        string fname, lname, address, city, state, zip;
};

#endif