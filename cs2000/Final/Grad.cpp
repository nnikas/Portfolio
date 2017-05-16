    #include "Grad.h"
    Grad::Grad(string r, Name n, Date d, Phone p, string m, string deg, double g): Student(n,d,p,m,deg,g){
        
        res=r;
        nGrad++;
        avgGrad += gpa/nGrad;
    }
    
    void Grad::print(){
        cout<<"Name:"<<endl;
        cout<<nm<<endl;
        cout<<"Date of Birth:"<<endl;
        cout<<dob<<endl;
        cout<<"Students Cell: "<<cell<<endl;
        cout<<"Area of Reasearch: "<<res<<endl;
        cout<<"Major: "<<major<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"GPA: "<<gpa<<endl;
        
        
    }