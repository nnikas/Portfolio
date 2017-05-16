#include <iostream>
using namespace std;

class Name{
    public:
    Name(){
        fname= "Nicole";
        minitial = 'N';
        lname = "Nikas";
    }
    Name(string FN, char MI, string LN);
    void setName(string FN, char MI, string LN);
    void display();
    void input();

    
    private:
    string fname, lname;
    char minitial;
    
};