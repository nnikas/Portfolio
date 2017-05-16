#include "course.h"

    // constructor that takes five explicit arguments
	Course::Course( int cid, int nc, double gpa, string cn, string inst){
	    do{
	       courseid=cid;
	       numcredit=nc;
	       gradepoint=gpa;
	       coursename= cn;
	       instructor=inst;
	    }while(setCourse(cid, nc, gpa, cn, inst)==true);
	}


	// Class level external input/output
	void Course::inputCourse(){
	    int cid; 
	    int nc;
	    double gpa;
	    string cn; 
	    string inst;
	    cout<<"Please enter a CourseID, the number of credits, your grade in the class, the course name, and the instructor"<<endl;
    	cin>>cid>>nc>>gpa>>cn>>inst;
        if(setCourse(cid, nc, gpa, cn, inst)==true){
	        courseid=cid;
	        numcredit=nc;
	        gradepoint=gpa;
	        coursename= cn;
	        instructor=inst;
        }
	}
	void Course::display(){
	    cout<<"CourseID is: "<<courseid<<endl;
	    cout<<"Number of Credits: "<<numcredit<<endl;
	    cout<<"Grade: "<<gradepoint<<endl;
	    cout<<"Course Name: "<<coursename<<endl;
	    cout<<"Instructor: "<<instructor<<endl;
	    
	}

	// Mutator methods
	bool Course::setCourse( int cid, int nc, double gpa, string cn, string inst){
	    bool retstat = true;
	    if (cid<1000 || cid>4000){
	        cout<<"This is not a course"<<endl;
	        retstat = false;
	    }
	    else if (nc<0||nc>4){
	        cout<<"This numbero of credits is impossible"<<endl;
	        retstat = false;
	    }
	    else if(gpa<0.0||gpa>4.0){
	        cout<<"This gpa is impossible"<<endl;
	        retstat = false;
	    }
	    else {
	        retstat = true;
	    }
	    return(retstat);
	}


	// Accessor methods
	int Course::getCredit(){
	    return numcredit;
	}
	int Course::getGrade(){
	    return gradepoint;
	}