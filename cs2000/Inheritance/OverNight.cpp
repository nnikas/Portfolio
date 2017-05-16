#include "OverNight.h"


OverNight::OverNight(double f, double w, double c, Customer s, Customer r): Package(w, c, s, r) {

        addfee = f;
        nOverNights++;
        onProfit += oz*(costPerOunce+addfee);
}


double OverNight::calculateCost() {

        return(oz*(costPerOunce+addfee));
}

void OverNight::print() {

        printCustomer();
        cout << "Overnight package delivery: additional cost per ounce = $" << addfee << endl;
        cout << oz << " ounces at $" << costPerOunce+addfee << " per ounce.\nTotal cost: $\
" << calculateCost() << endl;

}
