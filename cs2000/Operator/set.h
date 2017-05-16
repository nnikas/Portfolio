#ifndef SET_H
#define SET_H

#include<iostream>
#include<string>

using namespace std;
class Set {
   friend istream &operator>>(istream&i, Set &);
   friend ostream &operator<<(ostream&o, const Set&);
    public:
    
    Set(){
        
        set=NULL;
        psize=fsize=0;
    
    }
    Set(int);
    Set(string, int, int []);
    Set(const Set &);
    bool operator==(const Set &s);
    Set operator++(int d);
    Set operator++();
    bool exists(int);
    Set operator +(Set);
    int getpsize();
    const Set operator =( const Set &);
    void operator +(int); // ask about void &Set::
    int & operator [](int);
    int operator [](int) const;
    Set operator ^(Set);
    bool operator !=(const Set &s);
    void operator -(int);
    ~Set();
   
   
    

    

    private:
    static const int SIZE =100;
    int *set;
    int psize, fsize;
    string name;

    
    
};
#endif





