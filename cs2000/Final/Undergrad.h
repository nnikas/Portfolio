/* 


*/
#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include<iostream>
#include "Student.h"



using namespace std;

class Undergrad:public Student{
    public:
    Undergrad(){
        
    }
    Undergrad(Phone, Name, Date, Phone, string, string, double);
    void print();
    private:
    Phone par;

    
    
    
};

#endif