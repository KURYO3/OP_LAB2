#include <iostream>
using namespace std;
#define SIZE 10

class stack {
	char stck[SIZE];
	int tos;
public:
	stack();
	void push(char ch);
	char pop();
	void showstack(stack &s);
};

stack::stack() {
	tos = 0;
	cout << "Constructing a stack" << endl;
}

void stack::push(char ch) {
	if (tos == SIZE) {
		cout << "stack is full";
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop() {
	if (tos == 0) {
		cout << "Stack is empty";
		return 0;
	}
	tos--;
	return stck[tos];
}

void stack::showstack(stack &s){ // Якщо НЕ використовувати '&' то виведеться копія стеку, 
	                             // а якщо використовувати то і оригінал буде змінюватись.
	for (int i = 0; i < SIZE; i++)
		cout  << "Pop s:" << s.pop() << "\n";
}

int main() {
	stack s1, s2;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s2 = s1;
	s1.showstack(s1);
	for (int i = 0; i < 3; i++)
		cout  << "Pop s1:" << s1.pop() << "\n";
	for (int i = 0; i < 3; i++)
		cout << "Pop s2:" << s2.pop() << "\n";
	return 0;
}