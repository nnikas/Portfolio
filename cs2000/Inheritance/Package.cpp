#include "Package.h"

int Package::nTwoDays = 0;
int Package::nOverNights= 0;
double Package::tdProfit = 0.00;
double Package::onProfit = 0.00;



Package::Package(double w, double c, Customer s, Customer r) {

        oz = w;
        costPerOunce = c;
        send = s;
        rec = r;

}

double Package::calculateCost () {

        return(oz*costPerOunce);
}

bool Package::inRange(double f1, double f2, double c ) {

        bool retstat = false;
        if (f1>0 && f2>0 && c>0)
            retstat = true;
        else
            cout << "No negative values allowed. Please re-enter values." << endl;

        return(retstat);
}


void Package::printCustomer() {

        cout << "\nSender Information\n" << send << endl;
        cout << "Recipient Information\n" << rec << endl;
}


void Package::printSummaryInfo() {

        cout << "Total number of packages sent: " << nTwoDays+nOverNights << endl;
        cout << nTwoDays << " two day packages were sent, generating $" << tdProfit << "  and \
" << nOverNights << " overnight packages were sent, generating $" << onProfit << '.' << endl;

}