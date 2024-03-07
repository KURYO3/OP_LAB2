#include <iostream>
using namespace std;
#define SIZE 10

class stack {
	char stck[SIZE];
	int tos;
public:
	void init();
	void push(char ch);
	char pop();
};

inline void stack::init() {
	tos = 0;
}

void stack::push(char ch) { // не вигідно використовувати inline бо функція громістка і викликається не одноразово
	if (tos == SIZE) {
		cout << "stack is full";
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop() { // не вигідно використовувати inline бо функція громістка і викликається не одноразово
	if (tos == 0) {
		cout << "Stack is empty";
		return 0;
	}
	tos--;
	return stck[tos];
}

int main() {
	stack s1, s2;
	int i;

	s1.init();
	s2.init();

	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');

	for (i = 0; i < 3; i++) cout << "Pop s1:" << s1.pop() << "\n";
	for (i = 0; i < 3; i++) cout << "Pop s2:" << s2.pop() << "\n";	
}