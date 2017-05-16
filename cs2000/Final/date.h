#include<iostream>
using namespace std;
class Date {
   friend istream &operator>>(istream &, Date &);
   friend ostream &operator<<(ostream&, const Date&);
    public:
    
    Date(){
        
        m=d=1;
        y=1916;
    
    }
    Date(int day, int month, int year);
    
    bool operator==(const Date &);
    Date operator++(int d);
    Date operator++();
    void checkdate(int month, int day, int year);
    void display(ostream&o) const;
    void input(istream&i);
    bool setDate(int BM,int BD, int BY);
    bool setDay(int day);
    bool setMonth(int month);
    bool setYear(int year);
    int getDay();
    int getMonth();
    int getYear();
    

    private:
    int m, d, y;
    
    
};






