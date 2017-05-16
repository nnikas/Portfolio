
#include "student.h"
    // second constructor
    Student::Student(Name name, Program prog, Date bdate, char gender, int SI, int num, Course c[10], Phone homep, Phone cellp){
     //   cout<<"Constructor 2"<<endl;
     
        do{
        n = name;
        p  = prog;
        d = bdate;      
        studId = SI;
        g = gender;



        }while(setStudent(name, prog, bdate, gender, SI, num, homep, cellp)==true);
        

        for(int i =0; i<=num; i++){
          completedCourses[i] = c[i];
        }

        
    }


    //this displays the information of a student
    void Student::display(){
        Course curcourse;
        n.display();
        cout<<"Student ID Number: "<<studId<<endl;
        cout<<"Gender: "<<g<<endl;
        d.display();
        p.display();
        
        for(int i =0; i<=numCourse; i++){
            curcourse=completedCourses[i];
            curcourse.display();
        }

        cout<<totalCredits<<" total credits earned"<<endl;
        cout<<GPA<<" total GPA"<<endl;
        cout<<"Your homephone is";
        homephone.display();
        cout<<"Your cellphone is";
        cellphone.display();
        
    }
    // the input method for the user to input information into each field
    void Student::input(){
        Course curcourse;
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
            curcourse.input();
            completedCourses[i] = curcourse;
            
        }
        cout<<"Please enter a homephone: ";
        homephone.input();
        cout<<endl<<"Please enter a cellphone: ";
        cellphone.input();
        cout<<endl;
        
        

        
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
    bool Student::setStudent(Name name, Program prog, Date bdate, char gender, int SI, int num, Phone homep, Phone cellp){
        int day, month, year;
        day = bdate.getDay();
        month = bdate.getMonth();
        year = bdate.getYear();
        
        int area1, line1, exchange1, area2, line2, exchange2;
        area1 = homep.getAreaCode();
        line1 = homep.getLine();
        exchange1 = homep.getExchange();
        area2= cellp.getAreaCode();
        line2 = cellp.getLine();
        exchange2 = cellp.getExchange();
        
        bool retstat = false;

        if (setGender(gender)){
            retstat = true;
           // g=gender;
        }
        else{
            retstat = false;
        }
       // n = name;
        //p  = prog;
        if(bdate.setDate(day,month,year)){
            retstat = true;
            //d=bdate;
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
            //numCourse = num;
            
        }
        else{
            retstat = false;
        }
        if(homep.setPhone(area1,exchange1, line1)==true){
            retstat = true; 
          //  homephone = homep;
        }
        else{
            retstat = false;
        }
        if(cellp.setPhone(area2, exchange2, line2)==true){
            retstat= true;
        }
        else{
            retstat=false;
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
          totalCredits+=completedCourses[i].getCredit();
        }

        
    }
    void Student::calculteGPA(){
        for(int i =0; i<=numCourse; i++){
          GPA+=completedCourses[i].getGrade();
        }
        GPA/=numCourse;
    }
    

    


      


  



