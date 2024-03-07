#include <iostream>
using namespace std;

class base {
	int a;
public:
	void load_a(int n) { a = n; }
	int get_a() { return a; }
};

class derived: public base {
	int b;
public:
	void load_b(int n) { b = n; }
	int get_b() { return b; }
};

int main() {
	derived d1, d2;
	d1.load_a(1);
	d1.load_b(0);
	cout << "До переприсвоєння:\n" << "d1: " << d1.get_a() << ", " << d1.get_b() << "\nd2: " << d2.get_a() << ", " << d2.get_b();
	d2 = d1;
	cout << "\nПісля переприсвоєння:\n" << "d1: " << d1.get_a() << ", " << d1.get_b() << "\nd2: " << d2.get_a() << ", " << d2.get_b();
	return 0;
}
