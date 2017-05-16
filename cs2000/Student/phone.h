#include <iostream>
using namespace std;

class Phone{
    public:
    Phone(){
        areaCode=111;
        exchange= 111;
        line=1111;
    }
    Phone(int a, int e, int l);
    bool checkAreaCode(int a);
    bool checkExchange(int e);
    bool checkLine(int l);
    bool setPhone(int a, int e, int l);
    int getAreaCode();
    int getLine();
    int getExchange();
    void display();
    void input();

    
    private:
    const int MAX_TEXT=10;
    int areaCode, exchange, line;

    
};