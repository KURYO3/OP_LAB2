#include <iostream>
using namespace std;
#define SIZE 26

class stack {
	char stck[SIZE];
	int tos;
public:
	void init();
	void push(char ch);
	char pop();
	void loadstack(int upper);
};

void stack::init() {
	tos = 0;
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

void stack::loadstack(int upper) {
	if (upper == 1) {
		for (int i = 0, j = 65; i < SIZE; i++, j++){
		    push(j);
	    }
	} else {
	    for (int i = 0, j = 97; i < SIZE; i++, j++){
		    push(j);
	    }
    }
}

int main() {
	stack s1, s2;
	int i;

	s1.init();
	s2.init();

	s1.loadstack(1);
	s2.loadstack(0);

	for (i = 0; i < SIZE; i++) cout << "Pop s1:" << s1.pop() << "\n";
	for (i = 0; i < SIZE; i++) cout << "Pop s2:" << s2.pop() << "\n";	
}