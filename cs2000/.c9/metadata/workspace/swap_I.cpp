{"filter":false,"title":"swap_I.cpp","tooltip":"/swap_I.cpp","undoManager":{"mark":38,"position":38,"stack":[[{"start":{"row":0,"column":0},"end":{"row":58,"column":1},"action":"insert","lines":["/* ","Nicole Nikas ","01/31/15","CS2000","This program takes two lists, one of even and one of odd numbers from 1 to 20","It then swaps every other element in the two lists","It then prints every elemnt in the two lists","*/","","#include<iostream>","using namespace std;","//Initialization of the two swap functions and the display function","// both swap functions use a call by reference","void swap (int &a , int &b );","void swap (int [], int [],  int );","void display (int [], int );","","","int main(){","  const int MAX = 10;","  int x[MAX]={2,4,6,8,10,12,14,16,18,20};//even array","  int y[MAX]={1,3,5,7,9,11,13,15,17,19};//odd array","","","  //swaping the elements","  cout<<\"Now swaping the arrays...\"<<endl;","  swap (x, y, MAX);","","  //printing the arrays","  cout<<\"Now displaying the even list with the swapped elements\"<<endl;","  display (x, MAX);","  cout<<\"Now displaying the odd list with the swapped elements\"<<endl;","  display (y, MAX);",""," ","  return 0;","}","","void swap (int &a, int &b){","  int z = a;","  a= b;","  b=z;","","}","","void swap(int a[], int b[],int c ){","  for(int i=0; i<c; i+=2){// ever other element that is less than the maximum","","    swap(a[i],b[i]); //swap the elements","","  }","}","","void display (int a[], int c){","","  for(int i=0; i<c; i++){//print every element","    cout<<a[i]<<\"\\t\"<<endl;","  }","}"],"id":1}],[{"start":{"row":58,"column":1},"end":{"row":59,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":59,"column":0},"end":{"row":60,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":60,"column":0},"end":{"row":65,"column":1},"action":"insert","lines":["string NumberToString ( T Number )","{","\tstringstream ss;","\tss << Number;","\treturn ss.str();","}"],"id":5}],[{"start":{"row":65,"column":1},"end":{"row":66,"column":0},"action":"insert","lines":["",""],"id":6}],[{"start":{"row":66,"column":0},"end":{"row":67,"column":0},"action":"insert","lines":["",""],"id":7}],[{"start":{"row":67,"column":0},"end":{"row":72,"column":1},"action":"insert","lines":["T StringToNumber ( const string &Text )//Text not by const reference so that the function can be used with a ","{                               //character array as argument","\tstringstream ss(Text);","\tT result;","\treturn ss >> result ? result : 0;","}"],"id":8}],[{"start":{"row":67,"column":0},"end":{"row":67,"column":1},"action":"remove","lines":["T"],"id":9}],[{"start":{"row":66,"column":0},"end":{"row":67,"column":0},"action":"remove","lines":["",""],"id":10}],[{"start":{"row":66,"column":0},"end":{"row":67,"column":0},"action":"insert","lines":["",""],"id":11}],[{"start":{"row":67,"column":0},"end":{"row":67,"column":1},"action":"insert","lines":["i"],"id":12}],[{"start":{"row":67,"column":1},"end":{"row":67,"column":2},"action":"insert","lines":["n"],"id":13}],[{"start":{"row":67,"column":2},"end":{"row":67,"column":3},"action":"insert","lines":["t"],"id":14}],[{"start":{"row":60,"column":34},"end":{"row":61,"column":0},"action":"remove","lines":["",""],"id":15}],[{"start":{"row":66,"column":111},"end":{"row":67,"column":0},"action":"remove","lines":["",""],"id":16}],[{"start":{"row":66,"column":41},"end":{"row":66,"column":110},"action":"remove","lines":["//Text not by const reference so that the function can be used with a"],"id":17}],[{"start":{"row":66,"column":69},"end":{"row":67,"column":23},"action":"remove","lines":["     //character array as argument","\tstringstream ss(Text);"],"id":18}],[{"start":{"row":66,"column":41},"end":{"row":66,"column":42},"action":"remove","lines":[" "],"id":19}],[{"start":{"row":67,"column":1},"end":{"row":67,"column":2},"action":"remove","lines":["T"],"id":20}],[{"start":{"row":67,"column":1},"end":{"row":67,"column":2},"action":"insert","lines":["i"],"id":21}],[{"start":{"row":67,"column":2},"end":{"row":67,"column":3},"action":"insert","lines":[" "],"id":22}],[{"start":{"row":67,"column":3},"end":{"row":67,"column":4},"action":"insert","lines":["n"],"id":23}],[{"start":{"row":67,"column":4},"end":{"row":67,"column":5},"action":"insert","lines":["t"],"id":24}],[{"start":{"row":67,"column":4},"end":{"row":67,"column":5},"action":"remove","lines":["t"],"id":25}],[{"start":{"row":67,"column":3},"end":{"row":67,"column":4},"action":"remove","lines":["n"],"id":26}],[{"start":{"row":67,"column":2},"end":{"row":67,"column":3},"action":"remove","lines":[" "],"id":27}],[{"start":{"row":67,"column":2},"end":{"row":67,"column":3},"action":"insert","lines":["t"],"id":28}],[{"start":{"row":67,"column":2},"end":{"row":67,"column":3},"action":"remove","lines":["t"],"id":29}],[{"start":{"row":67,"column":2},"end":{"row":67,"column":3},"action":"insert","lines":["n"],"id":30}],[{"start":{"row":67,"column":3},"end":{"row":67,"column":4},"action":"insert","lines":["t"],"id":31}],[{"start":{"row":60,"column":24},"end":{"row":60,"column":25},"action":"remove","lines":["T"],"id":32}],[{"start":{"row":60,"column":24},"end":{"row":60,"column":25},"action":"insert","lines":["i"],"id":33}],[{"start":{"row":60,"column":25},"end":{"row":60,"column":26},"action":"insert","lines":["n"],"id":34}],[{"start":{"row":60,"column":26},"end":{"row":60,"column":27},"action":"insert","lines":["t"],"id":35}],[{"start":{"row":67,"column":12},"end":{"row":68,"column":0},"action":"insert","lines":["",""],"id":36},{"start":{"row":68,"column":0},"end":{"row":68,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":68,"column":1},"end":{"row":68,"column":23},"action":"insert","lines":["stringstream ss(Text);"],"id":37}],[{"start":{"row":66,"column":21},"end":{"row":66,"column":26},"action":"remove","lines":["const"],"id":38}],[{"start":{"row":66,"column":20},"end":{"row":66,"column":21},"action":"remove","lines":[" "],"id":39}],[{"start":{"row":60,"column":0},"end":{"row":70,"column":1},"action":"remove","lines":["string NumberToString ( int Number ){","\tstringstream ss;","\tss << Number;","\treturn ss.str();","}","","int StringToNumber ( string &Text ){                          ","\tint result;","\tstringstream ss(Text);","\treturn ss >> result ? result : 0;","}"],"id":40}]]},"ace":{"folds":[],"scrolltop":167,"scrollleft":0,"selection":{"start":{"row":60,"column":0},"end":{"row":60,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":41,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1455084619000,"hash":"57e89814ad2d916178399bba68828112219a46d4"}