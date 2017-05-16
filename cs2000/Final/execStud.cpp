#include "Undergrad.h"
#include "Grad.h"

main () {

        int response;

        int i = 0;
        int j = 0;


        Undergrad *u[10];
        Grad *g[10];

        Student s;
 
        string research;
        Phone parent;
        Name n; 
        Date d; 
        Phone p; 
        string m; 
        string deg; 
        double gpa;
        
        //requests user input
        cout << "What would you like to do? 0:exit, 1:Enter Undergrad, 2:Enter Graduate ";
        cin >> response;
        
        //This is the exit option
        if (response == 0){
                cout<<"Goodbye"<<endl;
        }
        while(response!=0){


        // this section adds to the Undergradn are Grad until it reaches 10 (the maximum I've chosen)

        if(response== 1){
                if (i<10) {
                        cin >> n >> d;
                        cout<< "Please enter your cell phone number: ";
                        cin >> p;
                        cout<< "Please enter your parent phone number: ";
                        cin >> parent;
                        cout<< "Please enter major: ";
                        cin >> m;
                        cout<< "Please enter degree: ";
                        cin >> deg;
                        cout<< "Please enter a gpa: ";
                        cin >> gpa;
                        u[i] = new Undergrad (parent, n, d, p, m, deg, gpa);
                        u[i] -> print();
                        i++;
                }
        }

        if(response== 2){
                if (j<10) {
                        cin >> n >> d;
                        cout<< "Please enter your cell phone number: ";
                        cin >> p;
                        cout<< "Please enter area of research: ";
                        cin >> research;
                        cout<< "Please enter major: ";
                        cin >> m;
                        cout<< "Please enter degree: ";
                        cin >> deg;
                        cout<< "Please enter a gpa: ";
                        cin >> gpa;
                        g[i] = new Grad (research, n, d, p, m, deg, gpa);
                        g[j] -> print();
                        j++;
                }
        }
        cout << "Would you like to enter again? 0:exit, 1:Enter Undergrad, 2:Enter Graduate";
        cin >> response;
        }

        //summary of two day packages ordered
        cout << "Undergraduate Students:" << endl;
        for (int i=0; i<Student::nUnd; i++){
                cout << "Student number " << i+1 << endl;
                u[i] -> print();
        }
        //summary of overnight packages ordered
        cout << "Graduate Students:" << endl;
        for (int i=0; i<Student::nGrad; i++){
                cout << "Student number" << i+1 << endl;
                g[i] -> print();
        }
        //summary of all packages
        Student::printSummaryInfo();

        cout << "Thank you!" << endl;
}
