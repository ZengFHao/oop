#include"Vet4.h"
#include<iostream>
using namespace std;

int main() {

	Vet4 v1(1, 2, 3, 4);
	Vet4 v2(0.1, 0.2, 0.3, 0.4);

	Vet4 v;
	cout << "v1:" << v1<<endl;
	cout << "v2:" << v2<<endl;
	v = v1 + v2;
	cout <<"(v1+v2):" << v<<endl;
	v = v1 - v2;
	cout << "(v1-v2):" << v << endl;
	v = v1 * v2;
	cout << "(v1*v2):" << v << endl;
	v = v1 / v2;
	cout << "(v1/v2):" << v << endl;
	v = v1;
	v += v2;
	cout << "(v1+=v2):" << v << endl;
	v -= v2;
	cout << "(v1-=v2):" << v << endl;
	v *= v2;
	cout << "(v1*=v2):" << v << endl;
	v /= v2;
	cout << "(v1/=v2):" << v << endl;
	cout << "v1[0]=" << v1[0] << endl;
	cout << "v1[1]=" << v1[1] << endl;
	cout << "v1[2]=" << v1[2] << endl;
	cout << "v1[3]=" << v1[3] << endl;
	cout << "v1[4]=" << v1[4] << endl;
	return 0;
}