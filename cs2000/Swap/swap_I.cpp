/* 
Nicole Nikas 
01/31/15
CS2000
This program takes two lists, one of even and one of odd numbers from 1 to 20
It then swaps every other element in the two lists
It then prints every elemnt in the two lists
*/

#include<iostream>
using namespace std;
//Initialization of the two swap functions and the display function
// both swap functions use a call by reference
void swap (int &a , int &b );
void swap (int [], int [],  int );
void display (int [], int );


int main(){
  const int MAX = 10;
  int x[MAX]={2,4,6,8,10,12,14,16,18,20};//even array
  int y[MAX]={1,3,5,7,9,11,13,15,17,19};//odd array


  //swaping the elements
  cout<<"Now swaping the arrays..."<<endl;
  swap (x, y, MAX);

  //printing the arrays
  cout<<"Now displaying the even list with the swapped elements"<<endl;
  display (x, MAX);
  cout<<"Now displaying the odd list with the swapped elements"<<endl;
  display (y, MAX);

 
  return 0;
}

void swap (int &a, int &b){
  int z = a;
  a= b;
  b=z;

}

void swap(int a[], int b[],int c ){
  for(int i=0; i<c; i+=2){// ever other element that is less than the maximum

    swap(a[i],b[i]); //swap the elements

  }
}

void display (int a[], int c){

  for(int i=0; i<c; i++){//print every element
    cout<<a[i]<<"\t"<<endl;
  }
}

