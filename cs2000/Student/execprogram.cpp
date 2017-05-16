#include"program.h"




main(){
    void test(Program &);
    Program p1;
    Program p2("RH","Engineering","CompSci","BS");



    cout<<"Now testing p1"<<endl;
    test(p1);
    cout<<"Now testing p2"<<endl;
    test(p2);

    
    

}

void test(Program &p){

   
    p.display();
 //   p.input();
  //  p.display();

}