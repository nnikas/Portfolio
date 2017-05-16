#include <iostream>
using namespace std;

class Polygon{
    public:
    Polygon(){
    
        length=width=area=1;
        numpolygons=1;

        
    
    }
    Polygon( int l, int w, int cmax, int cmin);
    ~Polygon();
    void display();
    void input();
    bool setSize(int x);
    void calcArea();
    void calcParameter();
    int getMaxNumPolygons();
    int getNumPolygons();

    
    private:
    static const int MAX_POLYGONS=25;
    static const int DEFAULT_MAX=100;
    static const int DEFAULT_MIN=10;
    static int numpolygons;
    int length;
    int width;
    int parameter;// this needs to be calculated
    int area;//this needs to be calculated
    const int MAX=DEFAULT_MAX;
    const int MIN=DEFAULT_MIN;
    
};