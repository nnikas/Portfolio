
#include "student.h"
    // second constructor
    Student::Student(Name name, Program prog, Date bdate, char gender, int SI, int num, Course c[10]){
     //   cout<<"Constructor 2"<<endl;
     
        do{
        n = name;
        p  = prog;
        d = bdate;      
        studId = SI;
        g = gender;
        }while(setStudent(name, prog, bdate, gender, SI, num)==true);
        

        for(int i =0; i<=num; i++){
          completedCourses[i] = c[i];
        }

        
    }


    //this displays the information of a student
    void Student::display(){
        
        n.display();
        cout<<"Student ID Number: "<<studId<<endl;
        cout<<"Gender: "<<g<<endl;
        d.display();
        p.display();
        
        for(int i =0; i<=numCourse; i++){
          completedCourses[i].display;
        }

        cout<<totalCredits<<" total credits earned"<<endl;
        cout<<GPA<<" total GPA"<<endl;
        
    }
    // the input method for the user to input information into each field
    void Student::input(){
    
        cout<<"Please answer the following questions with your information "<<endl;
        n.input();
        cout<<"Please enter Gender{M, F, U}: "<<endl;
        cin>>g;
        d.input();
        p.input();
        cout<<"Please enter your studentID Number: "<<endl;
        cin>>studId;
        cout<<"Please enter the number of courses completed."<<endl;
        cin>>numCourse;
        for(int i=0; i<=numCourse; i++){
            cout<<"Please enter a course"<<endl;
            cin>>completedCourses[i];
            
        }

        
    }  
    
        //this method sets the gender while checking if the gender is one of the given options
    bool Student::setGender(char gend){
        bool retstat= false;
        if (gend=='M'){
            retstat = true;
        }
        else if (gend=='F'){
           retstat = true;
        }
        else if (gend=='U'){
            retstat = true;
        }
        else{
            cout<<"You have not endered a gender"<<endl;
            retstat = false;
        }
        return(retstat);
    }
    //this method uses other methods to set the information of the student
    bool Student::setStudent(Name name, Program prog, Date bdate, char gender, int SI, int num, Course c[10]){
        bool retstat = false;

        if (setGender(gender)){
            retstat = true
            g=gender;
        }
        else{
            retstat = false;
        }
        n = name;
        p  = prog;
        if(Date.setDate(bdate)){
            retstat = true
            d=bdate;
        }
        else{
            retstat = false;
        }
        
        if(setIDNumber(SI)==true){
            retstat = true;
            studId = SI;
            
        }
        else{
            retstat = false;
        }
        
        if(setNumCourse(num)==true){
            retstat = true;
            numCourse = n;
            
        }
        else{
            retstat = false;
        }
        return(retstat);
 
    }
    //this method sets the ID number while checking if its 
    //beween the appropriate range of an Id number
    bool Student::setIDNumber(int ID){
        bool retstat = false;
        if( ID>1e7 &&ID<2e7){
            retstat = true;
            studId = ID;
        }
        else{
            cout<<"The number entered is not a student ID."<<endl;
            studId = 0;
            retstat = false;
        }
        return(retstat);
    }
    
    bool Student::setNumCourse(int n ){
        bool retstat = false;
        if(n<1||n>10){
            retstat = true;
        }
        else{
            retstat = false;
        }
        return(retstat);
    }
    void Student::calculateCreditsEarned(){
        for(int i =0; i<=numCourse; i++){
          totalCredits+=completedCourses[i].getCredit;
        }

        
    }
    void Student::calculteGPA(){
        for(int i =0; i<=numCourse; i++){
          GPA+=completedCourses[i].getGrade;
        }
        GPA/=numCourse;
    }
    

    


      


  



