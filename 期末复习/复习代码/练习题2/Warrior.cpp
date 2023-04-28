#include "Warrior.h"
Warrior::Warrior(const string s, Fighter *F) {
	this->s1 = s ;
	this->s2 = F->gets();
}
void Warrior::hello() {
	cout << s1 << " is a stronger warrior than " << s2 << endl;
}