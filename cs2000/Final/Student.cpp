#include "Student.h"
int Student::nGrad=0;
int Student::nUnd=0;
double Student::avgGrad=0.;
double Student::avgUnd=0.;

Student::Student(Name n, Date d, Phone p, string m, string deg, double g){
    nm=n;
    dob=d;
    cell=p;
    major=m;
    gpa=g;
    degree=deg;
}

void Student::printSummaryInfo() {


        cout<<"There are "<< nUnd<<" undergraduate students. " <<endl;
        cout<<"The average undergraduate gpa is "<<avgUnd<<endl;
        cout<<"There are "<< nGrad<<" graduate students." <<endl;
        cout<<"The average graduate gpa is "<<avgGrad<<endl;
        

}