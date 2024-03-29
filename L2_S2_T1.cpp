#include <iostream>
#include <cstring>
using namespace std;
enum color {red, yellow, green, orange};
void out (bool x);
char const *c[] = {"red ", "yellow", "green", "orange"};

class Fruit {
public:
	bool annual;
	bool perennial;
	bool tree;
	bool tropical;
	enum color clr;
	char name[40];
};
class Apple: public Fruit {
	bool cooking;
	bool crunchy;
	bool eating;
public:
	void seta(char const *n, enum color c, bool ck, bool crchy, bool e);
	void seta(char const *n, enum color c, const char* ck, const char* crchy, const char* e);
	void show();
};
class Orange: public Fruit {
	bool juice;
	bool sour;
	bool eating;
public: 
	void seto(char const *n, enum color c, bool j, bool sr, bool e);
	void seto(char const *n, enum color c, const char* j, const char* sr, const char* e);
	void show();
};

void out(bool x) {
	cout << ((x == false) ? "no" : "yes") << "\n";
}

void Apple::seta(char const *n, enum color c, bool ck, bool crchy, bool e){
	strcpy(name, n);
	annual = false;
	perennial = true;
	tree = true;
	tropical = false;
	clr = c;
	cooking = ck;
	crunchy = crchy;
	eating = e;
}
void Apple::seta(char const *n, enum color c, const char* ck, const char* crchy, const char* e){
	bool ck1 = (strcmp(ck, "yes") == 0);
    bool crchy1 = (strcmp(crchy, "yes") == 0);
    bool e1 = (strcmp(e, "yes") == 0);
    seta(n, c, ck1, crchy1, e1);
}

void Orange::seto(char const *n, enum color c, bool j, bool sr, bool e) {
	strcpy(name, n);
	annual = false;
	perennial = true;
	tree = true;
	tropical = true;
	clr = c;
	juice = j;
	sour = sr;
	eating = e;
}
void Orange::seto(char const *n, enum color c, const char* j, const char* sr, const char* e){
	bool j1 = (strcmp(j, "yes") == 0);
    bool sr1 = (strcmp(sr, "yes") == 0);
    bool e1 = (strcmp(e, "yes") == 0);
    seto(n, c, j1, sr1, e1);
}

void Apple::show() {
	cout << name << " apple is: " << "\n";
	cout << "Annual: "; out(annual);
	cout << "Perennial: "; out(perennial);
	cout << "Tree: "; out(tree);
	cout << "Tropical: "; out(tropical);
	cout << "Color: " << c[clr ] << "\n";
	cout << "Good for cooking: "; out(cooking);
	cout << "Crunchy: "; out(crunchy);
	cout << "Good for eating: "; out(eating);
}
void Orange::show() {
	cout << name << " orange is: " << "\n";
	cout << "Annual: "; out(annual);
	cout << "Perennial: "; out(perennial);
	cout << "Tree: "; out(tree);
	cout << "Tropical: "; out(tropical);
	cout << "Color: " << c[clr ] << "\n";
	cout << "Good for juice: "; out(juice);
	cout << "Sour: "; out(sour);
	cout << "Good for eating: "; out(eating);
}
int main() {
	Apple a1; Orange o1;
	a1.seta("Red Delicious", red, false, true, true);
	o1.seto("Navel", orange, false, false, true);
	a1.show(); o1.show();
	Apple a2;
	Orange o2;
	a2.seta("Jonathan", red, "yes", "no", "yes");
	o2.seto("Valencia", orange, "yes", "yes", "no");
	a2.show(); o2.show();
	return 0;
}