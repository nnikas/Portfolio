#ifndef SET_H
#define SET_H

#include<iostream>
#include<string>

using namespace std;
template < class T >
class Set {

    friend istream &operator>>(istream&i, Set<T> &s){
        
        if(s.set==NULL){
            s.set = new T[s.SIZE];
            s.psize= s.SIZE;
        }
        for(int j=0; j<s.psize; j++){
            i>>s.set[j];
            
        }
        return(i);
    }
    friend ostream &operator<<(ostream&o, const Set<T> &s){
        cout<<"{";
        for(int i=0; i< s.fsize; i++){
            o<<s.set[i]<<" ";
        }
        cout<<"}"<<endl;
        return(o);
    }
    public:
    
    Set(){
        
        set=NULL;
        psize=fsize=0;
    
    }
    Set(int);
    Set(string, int, int []);
    Set(const Set<T> &s);
    bool operator==(const Set<T> &s);
    T operator++(int d);
    T operator++();
    bool exists(int);
    T operator +(Set<T> );
    int getpsize();
    const T operator =( const Set<T> &right);
    void operator +(int); // ask about void &Set::
    int & operator [](int);
    int operator [](int) const;
    T operator ^(Set<T>);
    bool operator !=(const Set<T> &s);
    void operator -(int);
    ~Set(){
        if(set!=NULL){
            delete [] set;
            set=NULL;
        }
    }
   
   
    

    

    private:
    static const int SIZE =100;
    T *set;
    int psize, fsize;
    string name;

    
    
};


#include "set_temp.cpp"

#endif

