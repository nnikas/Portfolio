#include "program.h"

    Program::Program(string c, string m, string mm, string d){
        

        campus= c;
        checkCampus(c);
        major= m;
        minor= mm;
        degree= d;
        checkDegree(d);
    }
    void Program::checkCampus(string c){
         if (c== "RH"){
            campus = c;
        }
        else if (c=="LC"){
            campus = c;
        }
        else if (c=="WC"){
            campus = c;
        }
        else{
            cout<<"You have not endered a Campus"<<endl;
            campus="NotaCampus";
        }
    }
    void Program::checkDegree(string d){
        if(d=="BS"){
            degree = d;
        }
        else if (d=="BA"){
            degree = d;
        }

        else{
            cout<<"You have not endered a Degree"<<endl;
            degree="NotaDegree";
        }
    }
    void Program::setProgram(string c, string m, string mm, string d){
        campus = c;
        major = m;
        minor = mm;
        degree = d;
        checkDegree(d);
        checkCampus(c);
    }
    void Program::input(){
        cout<<"Please answer the following questions with your information "<<endl;
        cout<<"Please enter Campus: "<<endl;
        cin>>campus;
        cout<<"Please enter Major: "<<endl;
        cin>>major;
        cout<<"Please enter Minor: "<<endl;
        cin>>minor;
        cout<<"Please enter Degree: "<<endl;
        cin>>degree;
    }
    void Program::display(){
        cout<<"Program: "<<campus<<" "<<major<<" "<<minor<<" "<<degree<<endl;
    }