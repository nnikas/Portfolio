#include "phone.h"
    Phone::Phone(int a, int e, int l){
        if(setPhone(a,e,l)==true){
            areaCode=a;
            exchange=e;
            line=l;
            
        }
    }
    istream &operator>>(istream&i, Phone &p) {
        p.input(i);
        return(i);
    }
    ostream &operator<<(ostream&o, Phone &p) {
        p.display(o);
        return(o);
    }
    bool Phone::checkAreaCode(int a){
        bool retstat= false;
        if(a>100&&a<999){
            retstat = true;
        }
        else{
            retstat = false;
        }
        return retstat;
    }
    bool Phone::checkExchange(int e){
        bool retstat= false;
        if(e>100&&e<999){
            retstat = true;
        }
        else{
            retstat = false;
        }
        return retstat;
    }
    bool Phone::checkLine(int l){
        bool retstat= false;
        
        if(l>1000&&l<9999){
            retstat = true;
        }
        else{
            retstat = false;
        }
        return retstat;
    }
    bool Phone::setPhone(int a, int e, int l){
        bool retstat = false;
        if(checkAreaCode(a)&&checkExchange(e)&&checkLine(l)){
            retstat = true;
            areaCode=a;
            exchange=e;
            line=l;
        }
        else{
            retstat = false;
        }


        return retstat;
    }
    int Phone::getAreaCode(){
        return areaCode;
    }
    int Phone::getLine(){
        return line;
    }
    int Phone::getExchange(){
        return exchange;
    }
    
    void Phone::display(ostream &o){
        cout<<" ("<<areaCode<<") "<<exchange<<" - "<<line<<endl;
    }
    void Phone::input(istream &i){
        int a,e,l;
        char o, c,d;
        cout<<"Please enter a phone number in the for (XXX)XXX-XXXX: ";
        cin>>o>>a>>c>>e>>d>>l;
        if(setPhone(a,e,l)==true){
            areaCode=a;
            exchange=e;
            line=l;
        }
        else{
            cout<<"This number is incorrect please enter again:";
            cin>>o>>a>>c>>e>>l;
        }
    }