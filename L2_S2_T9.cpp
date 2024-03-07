#include <iostream>
using namespace std;

class who {
	char x;
public:
	who(char value);
	~who();
};

who::who(char value) {
	x = value;
	cout << "Constructing who #" << x << endl;
}

who::~who() {
	cout << "Destroying who #" << x << endl;
}

who make_who(char value) {
	return who(value);
}

int main() {
	who a = make_who('a');
	who w = make_who('w');
	who x = make_who('x');
	return 0;
}
