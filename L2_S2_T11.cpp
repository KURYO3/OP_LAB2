#include <iostream>
using namespace std;

class pr1 {
	int printing;
public:
	pr1() { 
		printing = 0; 
	}
	void set_print(int status) { //сетер
		printing = status; 
	}
	int get_print() { //гетер
		return printing;
	}
};

class pr2 {
	int printing;
public:
	void set_print(int status) { //сетер
		printing = status; 
	}
	int get_print() { //гетер
		return printing;
	}
};

class pr_st: public pr1, public pr2 { //множинне наслідування
public:
	bool st(pr1 p1, pr2 p2) {
		if (p1.get_print() == 1 || p2.get_print() == 1) 
			return true;
		else
			return false;
	}
};

int main() {
	pr1 printer1;
	pr2 printer2;
	printer1.set_print(0);
	printer2.set_print(0);
	pr_st status;
	cout << "Результат: " << status.st(printer1, printer2) << endl;
	return 0;
}
