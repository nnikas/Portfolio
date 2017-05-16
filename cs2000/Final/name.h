#include <iostream>
using namespace std;

class Name{
    friend istream &operator>>(istream&, Name&);
    friend ostream &operator<<(ostream&,  Name&);
    public:
    Name(){
        fname= "First";
        minitial = 'M';
        lname = "Last";
    }
    Name(string FN, char MI, string LN);
    void setName(string FN, char MI, string LN);
    void display(ostream&);
    void input(istream&);

    
    private:
    string fname, lname;
    char minitial;
    
};