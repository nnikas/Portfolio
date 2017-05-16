/* 
Nicole Nikas 
03/02/15
CS2000
*/

#include<iostream>
#include"date.h"
using namespace std;

main(){

    //cout<<x<<" "<<&x<<" "<<y<<" "<<&y<<endl;
    Date *ptrd, *ptrd2; // pointing ptrX to the address location of x ( dymanic memory allocation)
    ptrd= new Date; //new int(7); 
    ptrd2 = new Date(3,2,2015);
   // *ptrX = 17;
   // cout<<ptrd<<" "<<*ptrd<<endl;
    // dynamic means new and delete
  //  *ptrX = 12; * means what the variable is pointing too.
   // cout<< *ptrX<<" "<<&ptrX<<" "<<x<<endl; // pointers are local
   ptrd->display();
   ptrd2->display();
   delete ptrd2;
   delete ptrd;
    
}