#include "TwoDay.h"



TwoDay::TwoDay (double f, double w, double c, Customer s, Customer r): Package(w, c, s, r) {

        ffee = f;
        nTwoDays++;
        tdProfit += oz*costPerOunce + ffee;

}
double TwoDay::calculateCost() {

        return (oz*costPerOunce + ffee);
}

void TwoDay::print() {

        printCustomer();
        cout << "Two day package delivery: flat fee = $" << ffee << endl;
        cout << oz << " ounces at $" << costPerOunce << " per ounce."<<endl;
        cout<<"Total: $"<< calculateCost() << endl;
}