#include <iostream>
using namespace std;
main() {
	char ch;
	char* p1 = &ch;  //(1)
	int a[5] = { 1,1,1 };  //(2)
	int(&ab)[5] = a;  //(3)
	string str = { "str1","str2" };
	string *p2 = &str; //(4)
	char** p3 = &p1;  //(5)
	const int m = 0;  //(6)
	int const* p4 = 0;  //(7)
	const int* p5 = 0;  //(8)
}