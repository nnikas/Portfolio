#include <iostream>
using namespace std;

class Program{
    public:
    Program(){
        campus= "RH";
        major= "Engineering";
        minor= "CompSci";
        degree="BS";
    }
    Program(string c, string m, string mm, string d);
    void checkCampus(string c);
    void checkDegree(string d);
    void setProgram(string c, string m, string mm, string d);
    void display();
    void input();

    
    private:
    string campus, major, minor, degree;

    
};