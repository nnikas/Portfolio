#include<iostream>
using namespace std;
class Date {

    public:
    
    Date(){
        
        m=d=1;
        y=1916;
    
    }
    Date(int day, int month, int year);
    void checkdate(int month, int day, int year);
    void display() const;
    void input();
    void setDate(int BM,int BD, int BY);
    bool setDay(int day);
    bool setMonth(int month);
    bool setYear(int year);
    int getDay();
    int getMonth();
    int getYear();
    

    private:
    int m, d, y;
    
    
};






