#include"course.h"




main(){
    void test(Course);
    Course c1;
    Course c2(2000, 4, 3.0, "CS2", "Papadakis");



    cout<<"Now testing c1"<<endl;
    test(c1);
    cout<<"Now testing c2"<<endl;
    test(c2);

    
    

}

void test(Course c){

   
    c.display();
 //   c.input();
  //  c.display();

}