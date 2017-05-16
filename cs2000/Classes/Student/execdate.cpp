#include"date.h"

main(){
    void test(Date &);
    Date dt;
    Date dt2(05,24,1994);
    Date dt3(11,22,1993);


    cout<<"Now testing dt"<<endl;
    test(dt);
    cout<<"Now testing dt2"<<endl;
    test(dt2);
    cout<<"Now testing dt3"<<endl;
    test(dt3);
    
    

}

void test(Date &d){

   // d.initialize();
    d.display();
   // d.input();
   // d.display();
}