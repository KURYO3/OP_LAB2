#include <iostream>
const double PI = 3.141592653589793238;
using namespace std;

class Area {
public: 
	double height;
	double width;
};

class Rectangle: public Area {
public:
	Rectangle(double h, double w){
		height = h;
		width = w;
	}
	void area();
};
class Isosceles: public Area {
public:
	Isosceles(double h, double basis){
		height = h;
		width = basis;
	}
	void area();
};
class Cylinder: public Area {
public:
	Cylinder(double h, double radius){
		height = h;
		width = radius;
	}
	void area();
};

void Rectangle::area(){
	cout << "Площа прямокутника: " << height * width << endl;
}

void Isosceles::area(){
	cout << "Площа трикутника: " << 0.5 * height * width << endl;
}

void Cylinder::area(){
	cout << "Площа циліндра: " << 2 * PI * width * width + 2 * PI * width * height << endl;
}

int main() {
	Rectangle r1(5.0, 2.0);
	Isosceles i1(5.0, 2.0);
	Cylinder c1(5.0, 2.0);
	r1.area();
	i1.area();
	c1.area();
	return 0;
}