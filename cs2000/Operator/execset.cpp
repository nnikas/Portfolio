#include "set.h"

main(){
    Set s1(7);
    cout<<"Input Set 1: ";
    cin>>s1;
    cout<<"Set 1 is: ";
    cout<<s1;
    
    
    int array[7] = {1,2,3,4,5,6,7};
    Set s2("String2", 7, array);
    cout<<"Set 2 is: ";
    cout<<s2;
    
   // testing element
    s2[3]=9;
    int x = s2[3];
    cout<<x<<endl;
    cout<<s2<<endl;

    
    //testing == and !=
    if(s1==s2){
        cout<<"The two sets are equal."<<endl;
    }
    else{
       cout<<"The two sets are not equal."<<endl;
    }
    //Set c(s1);
    //testing union
    //int s = s1.getpsize()+s2.getpsize();
    Set s3(20);
    
    s3 = s1+s2;
    cout<<"This the the union of Set 1 and Set 2"<<endl;
    cout<<s3;
    
    s1+99;
    cout<<"adding element 99 to Set 1"<<endl;
    cout<<s1;
   
    cout<<"deleting element 1 from Set 1"<<endl;
    s1-3;
    cout<<s1;
    
     
    Set s4(7);
    //testing intersection
    s4 = s1^s2;
    cout<<"The intersection from Set 1 and Set 2"<<endl;
    cout<<s4;
    
    

}