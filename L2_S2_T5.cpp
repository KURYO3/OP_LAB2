#include <iostream>
using namespace std;

int my_abs(int n);
long my_abs(long n);
double my_abs(double n);

int main() {
	cout << "Absolute value of -10: " << my_abs(-10) << "\n";
	cout << "Absolute value of -10L: " << my_abs(-10000000000L) << "\n";
	cout << "Absolute value of -10.01: " << my_abs(-10.01) << "\n";
	return 0;
}

inline int my_abs(int n) {
	cout << "In integer abs()\n";
	return n<0 ? -n : n;
}

inline long my_abs(long n) {
	cout << "In long abs()\n";
	return n<0 ? -n : n;
}

inline double my_abs(double n) {
	cout << "In double abs()\n";
	return n<0 ? -n : n;
}
