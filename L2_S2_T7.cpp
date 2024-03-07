#include <iostream>
#include <cstdlib>
using namespace std;

class Dice {
private:
	int x;
public:
	int roll();
};

int Dice::roll() {
	x = rand() % 6 + 1;
	return x;
}

int main() {
	srand(time(0));
	Dice d1, d2, d3, d4;
	for (int i = 1; i <= 5; i++){
		cout << "Результат кидка " << i << " для першого кубика: " << d1.roll() << "\n";
		cout << "Результат кидка " << i << " для другого кубика: " << d2.roll() << "\n";
		cout << "Результат кидка " << i << " для третього кубика: " << d3.roll() << "\n";
		cout << "Результат кидка " << i << " для четвертого кубика: " << d4.roll() << "\n\n";
	}

	return 0;
}