#include "name.h"

    Name::Name(string FN, char MI, string LN){
        fname = FN;
        lname = LN;
        minitial = MI;
    }
    void Name::setName(string FN, char MI, string LN){
        fname = FN;
        lname = LN;
        minitial = MI;
    }
    void Name::input(){

      //  cout<<"Please answer the following questions with your information "<<endl;
        cout<<"Please enter First Name: "<<endl;
        cin>>fname;
        cout<<"Please enter Last Name: "<<endl;
        cin>>lname;
        cout<<"Please enter Middle Initial: "<<endl;
        cin>>minitial;
    }
    void Name::display(){
        cout<<"Name: "<<fname<<" "<<minitial<<" "<<lname<<endl;
    }