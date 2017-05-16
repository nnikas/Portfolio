#include "Customer.h"

Customer::Customer() {

        fname = "Nicole";
        lname = "Nikas";
        address = "3Maher";
        city = "Greenwich";
        state = "Connecticut";
        zip = "06830";
}

istream &operator>>(istream&i, Customer&c) {

        cout << "\nPlease enter customer information " << endl;
        cout << "Enter customer first and last name: ";
        i >> c.fname >> c.lname;
        cout << "Enter street address: ";
        i >> c.address;
        cout << "Enter city: ";
        i >> c.city;
        cout << "Enter state: ";
        i >> c.state;
        cout << "Enter zipcode: ";
        i >> c.zip;

        return (i);
}

ostream &operator<<(ostream&o, const Customer&c) {

        o << "Customer name: " << c.fname << ' ' << c.lname << endl;
        o << "Street address: " << c.address << endl;
        o << "City: " << c.city << endl;
        o << "State: " << c.state << endl;
        o << "Zip Code: " << c.zip << endl;

        return (o);
}