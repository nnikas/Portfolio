/* 


*/
#ifndef GRAD_H
#define GRAD_H
#include<iostream>
#include "Student.h"



using namespace std;

class Grad:public Student{
    public:
    Grad(){
        
    }
    Grad(string, Name, Date, Phone, string, string, double);
    void print();
    private:
    string res;

    
    
    
};

#endif