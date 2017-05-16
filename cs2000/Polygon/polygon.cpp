#include "polygon.h"



    Polygon::Polygon(int l, int w, int cmax, int cmin):MAX(cmax), MIN(cmin){
        
        Polygon::length=l;
        Polygon::width=w;

      
    
    }
    
    Polygon::~Polygon(){
        cout<<"object is being destroyed"<<endl;
        
    }

    void Polygon::input(){
        int w,l;
        cout<<"Please enter a width: ";
        cin>>w;
        if(setSize(w)==true){
            width = w;
        }
        else{
            cin>>w;
        }
        cout<<endl<<"Please enter a length: ";
        cin>>l;
        if(setSize(l)==true){
            length = l;
        }
        else{
            cin>>l;
        }
        cout<<endl;
    }
    void Polygon::display(){
        cout<<"The width is "<<width<<endl;
        cout<<"The lenght is "<<length<<endl;
        cout<<"The area is "<<area<<endl;
        cout<<"The perimeter is "<<perimeter<<endl;
        
    }
    bool Polygon::setSize(int x){
        bool retstat = false;
        if(x>MIN&&x<MAX){
            retstat = true;
        }
        else{
            retstat = false;
            cout<<"size is not within boundaries, enter again"<<endl;
        }
        return retstat;
    }
    void Polygon::calcPerimeter(){
        perimeter=2*length+2*width;
        totalperimeter+=perimeter;
    }
    void Polygon::calcArea(){
        area=length*width;
        totalarea+=area;
        
    }
    int Polygon::getMaxNumPolygons(){
        return MAX_POLYGONS;
    }
    
    int Polygon::getAvgArea(){
        return totalperimeter;
    }
    int Polygon::getAvgPerimeter(){
        return totalarea;
    }

    void Polygon::draw(){


        for (int l=1; l<=length; l++){
                for (int w=1; w<=width; w++){
                        if (l==1 || l==length || w==1 || w==width){
                                cout << '*';
                        }
                        else{
                                cout << ' ';
                        }
                }cout << endl;
        }
}