#pragma once
#include<iostream>
using namespace std;
class Sequence
{
	int value;
public:
	Sequence() {
		value = 0;
	}
	virtual void print() = 0;
	void set(int x) {
		value = x;
	}
	int get() {
		return value;
	}
};

class Increment : public Sequence
{
	int a;
public:
	Increment(int x) {
		this->set(x);
		a = x;
	}
	void print() {
		cout << this->get()<< "\t";
		this->set(a + 1);
		a += 1;
	}
};

class Power :public Sequence
{
	int a;
public:
	Power(int x) {
		this->set(x);
		a = x;
	}
	void print() {
		cout << this->get() << "\t";
		this->set(a *a);
		a *= a;
	}
};

class Decrement :public Sequence
{
	int a;
public:
	Decrement(int x) {
		this->set(x);
		a = x;
	}
	void print() {
		cout << this->get() << "\t";
		this->set(a -1);
		a -= 1;
	}
};
