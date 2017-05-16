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
void display (int [][3], int, int);
void initialize( int [][3], int, int, int[], int[], int );


int main(){
  const int ROW = 5;
  const int COL = 3;
  const int MAX = 10;
  int z[ROW][COL];
  int x[MAX]={2,4,6,8,10,12,14,16,18,20};//even array
  int y[MAX]={1,3,5,7,9,11,13,15,17,19};//odd array


  //swaping every other the elements of the x and y arrays
  cout<<"Now swaping the arrays..."<<endl;
  swap (x, y, MAX);

  //printing 1-D arrays
  cout<<"Now displaying the even list with the swapped elements"<<endl;
  display (x, MAX);
  cout<<"Now displaying the odd list with the swapped elements"<<endl;
  display (y, MAX);

  cout<<"Now initializing the "<<ROW<<" by "<<COL<<" matrix."<<endl;
  initialize (z, ROW, COL, x, y, MAX);
  
  cout<<"Now displaying the initialized matrix that is "<<ROW<<" by "<<COL<<endl;
  display (z, ROW, COL);
 
  return 0;
}

void swap (int &a, int &b){
  int z = a;
  a= b;
  b=z;

}
// swaps every other elements in two one dimensional arrays
void swap(int a[], int b[],int c ){
  for(int i=0; i<c; i+=2){// ever other element that is less than the maximum

    swap(a[i],b[i]); //swap the elements

  }
}
//displays one dimensional array
void display (int a[], int c){

  for(int i=0; i<c; i++){//print every element
    cout<<a[i]<<"\t"<<endl;
  }
}

void initialize( int d [][3], int r, int  c, int a[],int b[], int m){
  int index=0;
  int index2=0;
  

  for(int i = 0; i<r; i+=2){
    for(int j=0; j<c; j++){
      d[i][j]=b[index];
     
    
  
      if(index<m){
        index ++;
      }
      else{
        index --;
      }
    }
    
   
  }
  
    for(int k = 1; k<r; k+=2){
    for(int l= 0; l<c; l++){
      d[k][l]=a[index2];
     
    
  
      if(index2<m){
        index2 ++;
      }
      else{
        index2 --;
      }
    }
    
   
  }
    
  }

    
  
  


void display(int d[][3],int r, int c){
  
    for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cout<<d[i][j]<<"\t";
    }
    cout<<endl;
    }
}