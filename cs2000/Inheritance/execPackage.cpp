#include "OverNight.h"
#include "TwoDay.h"

main () {

        char response, response2;
        double ounces, costPerOunce, flatfee, addfee;
        int i = 0;
        int j = 0;
        response2 = '+';

        TwoDay *td[100];
        OverNight *on[100];

        Package p;
        Customer send;
        Customer rec;

        //check if the numbers are negative
        if(p.inRange(flatfee, addfee, costPerOunce)==true){
                cout << "Enter flat fee for two day delivery: $";
                cin >> flatfee;
                cout << "Enter additional fee per ounce for overnight delivery: $";
                cin >> addfee;
                cout << "Enter cost per ounce: $";
                cin >> costPerOunce;
        }

        
        //requests user input
        cout << "Enter 't' for two day delivery, 'o' for overnight delivery, or 'x' to exit: ";
        cin >> response;
        
        //This is the exit option
        if (response == 'x'){
                cout<<"Goodbye"<<endl;
        }
        while(response!='x'){
        cout << "Enter weight of package in ounces: ";
        cin >> ounces;

        // this section adds to the overnight are twoday until it reaches 100 the maximum

        if(response== 't'){
                if (i<100&&response2=='+') {
                      //  cout<<"When you would like to continue enter +, to finish with TwoDay press anything else"<<endl;
                        cin >> send >> rec;
                        td[i] = new TwoDay (flatfee, ounces, costPerOunce, send, rec);
                        td[i] -> print();
                      //  cin>>response2;
                        i++;
                }
        }

        if(response== 'o'){
                if (j<100 && response2=='+') {
                     //   cout<<"When you would like to continue enter +, to finish with TwoDay press anything else"<<endl;
                        cin >> send >> rec;
                        on[j] = new OverNight (addfee, ounces, costPerOunce, send, rec);
                        on[j] -> print();
                      //  cin>>response2;
                        j++;
                }
        }
        cout << "Would you like to enter again? Enter 't' for two day delivery, 'o' for overnight delivery, or 'x' to exit: ";
        cin >> response;
        }

        //summary of two day packages ordered
        cout << "Two day packages:" << endl;
        for (int i=0; i<Package::nTwoDays; i++){
                cout << "Package number " << i+1 << endl;
                td[i] -> print();
        }
        //summary of overnight packages ordered
        cout << "Overnight packages:" << endl;
        for (int i=0; i<Package::nOverNights; i++){
                cout << "Package number" << i+1 << endl;
                on[i] -> print();
        }
        //summary of all packages
        Package::printSummaryInfo();

        cout << "Thank you for mailing!" << endl;
}
