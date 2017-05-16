#include"phone.h"




main(){
    void test(Phone p);
    Phone p1;
    Phone p2(203,548,1664);



    cout<<"Now testing p1"<<endl;
    test(p1);
    cout<<"Now testing p2"<<endl;
    test(p2);

    
    

}

void test(Phone p){

   
    p.display();
    p.input();
  //  p.display();

}