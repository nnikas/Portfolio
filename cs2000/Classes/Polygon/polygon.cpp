#include "polygon.h"



    Polygon::Polygon(int n , int l, int w, int cmax, int cmin):MAX(cmax),MIN(cmin),numpolygons(n){
        
        length=l;
        width=w;
    
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
        cout<<"The parameter is "<<parameter<<endl;
        
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
    void Polygon::calcParameter(){
        parameter=2*length+2*width;
    }
    void Polygon::calcArea(){
        area=length*width;
        
    }
    int Polygon::getMaxNumPolygons(){
        return MAX_POLYGONS;
    }
    int Polgon::getNumPolygons(){
        return numpolygons;
    }