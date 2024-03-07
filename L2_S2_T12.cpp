#include <iostream>
using namespace std;

class planet {
	int moons;
	double dist_from_sun;
	double diametr;
	double mass;
public:
	void set_miles(double miles) {
		dist_from_sun = miles;
	}
	double get_miles() {
		return dist_from_sun;
	}
};

double light(planet pl) {
	return pl.get_miles() / 186000;
}

int main() {
	planet pl;
	pl.set_miles(100000000);
	cout << "Час за який світло дійде до планети: " << light(pl) << endl;
	return 0;
}