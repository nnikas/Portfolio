#include"polygon.h"




main(){
   void test(Polygon *p);
    
    Polygon poly;
    int innum;
    cout<<"Please enter a number of polygons"<<endl;
    cin>>innum;
    static int NumberofPolygons=innum;
    int MaxNumPoly = poly.getMaxNumPolygons();
    
   // Polygon p[MaxNumPoly];
    Polygon *ptr[MaxNumPoly];
    //ptr = new Polygon[MaxNumPoly];
    for(int i=0; i<NumberofPolygons; i++){
        //new Polygon poly1;
        ptr[i] =  new Polygon;
        //ptr+i;
    }
    
    int inobj;
    cout<<"Specify and object number you would like to enter details about: ";
    cin>>inobj;
    ptr[inobj]->input();
    
    
    int drawobj;
    cout<<"Specify which object you would like to draw: ";
    cin>>drawobj;
    cout<<endl;
    ptr[drawobj]->draw();
    
    
    
    
    

    
    for(int i=0; i<NumberofPolygons; i++){
        cout<<"Polygon("<<i<<"):"<<endl;
        test(ptr[i]);
        
    }
    Polygon *maxptr = ptr[NumberofPolygons-1];
    

    cout<<NumberofPolygons<<" polygons were built."<<endl;
    int avgP = maxptr->getAvgPerimeter();
    avgP/=NumberofPolygons;
    int avgA = maxptr->getAvgArea();
    avgA/=NumberofPolygons;
    cout<<"The average perimeter is "<<avgP<<" and the average area is "<<avgA<<endl;
    
    
    for(int i = 0; i<NumberofPolygons; i++){
        delete ptr[i];
    }
   // delete maxptr;
}


void test(Polygon *p){



    p->calcPerimeter();
    p->calcArea();
    p->display();


}
