#include <iostream>
using namespace std;

class Name{
    public:
    Name(){
        fname= "First";
        minitial = 'M';
        lname = "Last";
    }
    Name(string FN, char MI, string LN);
    void setName(string FN, char MI, string LN);
    void display();
    void input();

    
    private:
    string fname, lname;
    char minitial;
    
};