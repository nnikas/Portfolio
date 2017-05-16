/* 


*/
#ifndef STUDENTT_H
#define STUDENTT_H
#include<iostream>
#include "name.h"
#include "date.h"
#include "phone.h"



using namespace std;

class Student{
    public:
    // default constructor
    Student(){
    degree="Degree";
    major="Major";
    gpa=4.0;
    

    }
    Student(Name, Date, Phone, string, string, double);    
    static void printSummaryInfo();
    static int nGrad;
    static int nUnd;
    static double avgGrad;
    static double avgUnd;
    //data members that make up the fields of a students information 
    protected:
    
    Name nm;
    Date dob;
    Phone cell;
    string major;
    string degree;
    double gpa;
        
        
    

};
#endif
