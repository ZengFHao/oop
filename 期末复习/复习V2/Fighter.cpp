#include "Fighter.h"
Fighter::Fighter(const string s) {
	p = s;
}
string Fighter::gets() {
	return p;
}
void Fighter::outTitle() {
	cout << "We are fighters." << endl;
}
void Fighter::hello() {
	cout << p << " is a fighter." << endl;
}