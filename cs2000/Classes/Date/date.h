#include<iostream>
using namespace std;
class Date {

    public:
    
    Date(){
        
        m=d=y=-1;
    
    }
    Date(int day, int month, int year);
    void checkdate(int month, int day, int year);
    void display() const;
    void input();
    void setDate(int BM,int BD, int BY);
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    int getDay();
    int getMonth();
    int getYear();
    

    private:
    int m, d, y;
    
    
};






