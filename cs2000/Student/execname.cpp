#include"name.h"




main(){
    void test(Name &);
    Name n1;
    Name n2("Angelina",'J',"Pitt");



    cout<<"Now testing n1"<<endl;
    test(n1);
    cout<<"Now testing n2"<<endl;
    test(n2);

    
    

}

void test(Name &n){

   
    n.display();
   // n.input();
   // n.display();
   //n.setName("FirstName", "M", "LastName");
}