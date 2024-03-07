#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
	char *p;
	int len;
public:
	strtype(char const *ptr);
	~strtype();
	void show();
	friend char* get_string(strtype *s); // дружня функція, яка має доступ до 'p'
};

strtype::strtype(char const *ptr) {
	len = strlen(ptr);
	p = (char *)malloc(len+1);
	if (!p) {
		cout << "Allocation error.\n";
		exit(1);
	}
	strcpy(p, ptr);
}

strtype::~strtype() {
	cout << "Freeing p\n";
	free(p);
}

void strtype::show() {
	cout << p << " - length : " << len << "\n";
}

char* get_string(strtype *s) { // приймає вказівник на об'єкт
	return s->p; // повертає вказвіник на рядок
}

int main() {
	strtype s1("This is a test."), s2("I hate any programming!");
	s1.show();
	s2.show();
	cout << "String of s1: " << get_string(&s1) << "\n";
	cout << "String of s2: " << get_string(&s2) << "\n";
	return 0;
}
