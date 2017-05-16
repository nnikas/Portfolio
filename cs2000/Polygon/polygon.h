#include <iostream>
using namespace std;

class Polygon{
    
    public:
    Polygon():MAX(DEFAULT_MAX),MIN(DEFAULT_MIN){
    
        length=width=MIN;


        


        
    
    }
    Polygon( int l, int w, int cmax, int cmin);
    ~Polygon();
    void display();
    void input();
    bool setSize(int x);
    void calcArea();
    void calcPerimeter();
    int getMaxNumPolygons();
    int getAvgArea();
    int getAvgPerimeter();
    void draw();

    
    private:
    static const int MAX_POLYGONS=25;
    static const int DEFAULT_MAX=100;
    static const int DEFAULT_MIN=10;
    int length;
    int width;
    int perimeter;// this needs to be calculated
    int totalperimeter;
    int totalarea;
    int area;//this needs to be calculated
    const int MAX;
    const int MIN;
    
};