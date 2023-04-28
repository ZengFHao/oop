#pragma once
#include <iostream>
using namespace std;
class Base
{
public:
	Base() {
		cout << "1";
	}
	~Base() {
		cout << "2";
	}
	virtual void iam() { cout << "Base\n"; }
};
/*
class A : public Base {
public:
	A() {
		cout << "3";
	}
	~A() {
		cout << "4";
	}
	void iam() {
		cout << "class A" << endl;
	}
};

class B : public Base {

public:
	void iam() {
		cout << "class B" << endl;
	}
};
*/



