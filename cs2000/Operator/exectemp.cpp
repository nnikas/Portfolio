

#include "set_temp.h"


int main()
{
   cout << "TESTING INTEGERS\n";
 
   Set < int > integers(3); 
   cout << "After instantiation, array:\n" << integers << endl;;
   cin >> integers;
   cout << "\nSet after initialization:\n" << integers;
  
   cout << "\nTesting Copy constructor:\n";
   Set<int> integers2 = integers;
   cout << "\nIntegers2:\n" << integers2;

   
   cout << "\nTESTING DOUBLES\n";

   Set < double > dbls(3); 
   cout << "After instantiation, array:\n" << dbls << endl;;
   cin >> dbls;
   cout << "After initialization, array:\n" << dbls << endl;;

   cout << "\nTESTING CHARS\n";

   Set < char > chrs(3); 
   cout << "After instantiation, array:\n" << chrs << endl;;
   cin >> chrs;
   cout << "After initialization, array:\n" << chrs << endl;;

   cout << "\nTESTING STRINGS\n";
 
   Set < string > strs(3); 
   cout << "After instantiation, array:\n" << strs << endl;;
   cin >> strs;
   cout << "After initialization, array:\n" << strs << endl;;
} // end main