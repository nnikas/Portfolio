#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course {
public:
    // Class Constructors
    // default constructor
	Course(){
	    courseid=1000;
	    numcredit=0;
	    gradepoint=0.;
	    coursename="CourseName";
	    instructor="Instructor";
	} 
	Course( int, int, double, string, string); // constructor that takes five explicit arguments


	// Class level external input/output
	void input();
	void display();

	// Mutator methods
	bool setCourse( int, int, double, string, string );


	// Accessor methods
	int getCredit();
	int getGrade();



private:
    int courseid;
    int numcredit;
    double gradepoint;
    string coursename;
    string instructor;
};

#endif