#include<iostream>


using namespace std;
// Defining Base class Polygon
class Polygon {

public:
    	Polygon(int a, int b) { 
		width=a; height=b; 
	}

	int area() {
		return( width * height );
	}

    	void printarea (void) { 
		cout << "Area of the polygon is " << area() << endl; 
	}

  protected:
    int width, height;
};


// deriving class Rectangle from class Polygon
class Rectangle: public Polygon {

public:
	Rectangle(int w, int h):Polygon(w,h){};
};


// deriving class Triangel from class Polygon
class Triangle: public Polygon {

public:
	Triangle( int w, int h ):Polygon(w,h){};

    	int area () { 
		return (Polygon::area()/2); 
	}

	void printarea() {
		cout << "Area of the triangle is " << area() << endl;
	}
};

// main program
int main () {
	// Create a rectangle object
  	Rectangle rect(5,5);

	// Create a triangle object
  	Triangle triag(6,7);

	rect.printarea();
	triag.printarea();
}