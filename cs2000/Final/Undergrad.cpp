#include "Undergrad.h"
    Undergrad::Undergrad(Phone parent, Name n, Date d, Phone p, string m, string deg, double g): Student(n,d,p,m,deg,g){
        
        par=parent;
        nUnd++;
        avgUnd += gpa/nUnd;
    }
    
    void Undergrad::print(){
        cout<<"Name:"<<endl;
        cout<<nm<<endl;
        cout<<"Date of Birth:"<<endl;
        cout<<dob<<endl;
        cout<<"Parents Cell: "<<par<<endl;
        cout<<"Students Cell: "<<cell<<endl;
        cout<<"Major: "<<major<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"GPA: "<<gpa<<endl;
        
        
    }