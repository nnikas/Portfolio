#include <iostream>
using namespace std;

class baseClass {

public:
	baseClass() {
		id = -1;
	}

	baseClass( int i ) {
		id = i;
	}

    	virtual void print() { 
		cout << "Base Class print(): id == " << id << endl; 
	}

protected:
	int id;
};


class derivedClass1: public baseClass  {

public:
	derivedClass1( int i ) : baseClass(i) {}

	void print() {
		cout << "Derived Class #1 print(): id == " << id << endl;
	}
};


class derivedClass2: public baseClass {

public:
	derivedClass2( int i ) : baseClass(i) {}
	void print() {
		cout << "Derived Class #2 print(): id == " << id << endl;
	}
};

// main program
int main () {
	
	baseClass b;
	derivedClass1 d1(1);
	derivedClass2 d2(2);

	cout << endl << "Output from base and derived objects...." << endl;
	b.print();
	d1.print();
	d2.print();

	baseClass *bptr = 0;

	cout << endl << "Setting base class pointer to derived class #1 object" << endl;
	bptr = &d1;
	bptr->print();

	cout << endl << "Setting base class pointer to derived class #2 object" << endl;
	bptr = &d2;
	bptr->print();
}