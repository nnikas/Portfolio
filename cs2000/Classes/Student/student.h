/* 
Nicole Nikas 
02/16/2016
CS2000
In this program you will find the deffinition of the student class which includes 
the first and last name, middle initial, gender, birthday and student ID number.
There are varios methods that are used to set the values of the members of the class.
Lastly the test function found after the main function is used to check the methods of the objects(s1 and s2)
of the Student class.

*/
#include<iostream>
#include "name.h"
#include "date.h"
#include "program.h"
#include "course.h"

//#ifndef STUDENT_H
//#define STUDENT_H

using namespace std;

class Student{
    public:
    // default constructor
    Student(){
      //  cout<<"Default Constructor"<<endl;
        studId=10000000;
        g= 'U';
        numCourse = 1;
        completedCourses[10] = {cdummy};
     
    }
    Student(Name name, Program prog, Date bdate, char gender, int SI, int num, Course c[10]);
    bool setGender(char gend);
    bool setIDNumber(int ID);
    bool setStudent(Name name, Program prog, Date bdate, char gender, int SI, int num, Course c[10]);
    bool setNumCourse(int num);
    void display();
    void input();
    void calculteGPA();
    void calculateCreditsEarned();


      //data members that make up the fields of a students information 
    private:
        int studId;
        Name n;
        char g;
        Date d;
        Program p;
        Course cdummy;
        int numCourse;
        Course completedCourses[10];
        int totalCredits;
        double GPA;
    

};
//endif
