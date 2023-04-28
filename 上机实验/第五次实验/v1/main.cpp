#include<iostream>
#include"Complex.h"
using namespace std;
int main() {
	Complex a = Complex(1, 2);
	Complex b = 3;
	Complex c = a + 2.3;
	Complex d = 2 + b;
	Complex e = -b - c;
	Complex f = c * 2 * c;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;
	cout << "d:" << d << endl;
	cout << "e:" << e << endl;
	cout << "f:" << f << endl;
	if (a == b) {
		cout << "a equal b" << endl;
	}
	else cout << "a not equal b" << endl;
	Complex g(1,2);
	cout << "g:" << g << endl;
	if (a == g) {
		cout << "a equal g" << endl;
	}
	else cout << "a not equal g" << endl;
	return 0;
}