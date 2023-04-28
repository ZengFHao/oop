#pragma once
#include<iostream>

using namespace std;


class Integer
{
private:
	int value;
public:
	Integer() {
		value = 0;
	}
	Integer(int n){
		value = n;
	}
	Integer(const Integer& x) {
		this->value = x.value;
	}

	Integer operator+(int x) {
		Integer t = *this;
		t.value += x;
		return t;
	}
	Integer operator-(int x) {
		Integer t = *this;
		t.value -= x;
		return t;
	}
	Integer operator/(const Integer& x) {
		Integer t = *this;
		t.value /= x.value;
		return t;
	}
	Integer& operator*=(const Integer& x) {
		value *= x.value;
		return *this;
	}

	friend istream& operator>>(istream& in, Integer& x);
	friend ostream& operator<<(ostream& os, const Integer& x);
};
ostream& operator<<(ostream& os, const Integer& x) {
	os << x.value;
	return os;
}
istream& operator>>(istream& in, Integer& x) {
	in >> x.value;
	return in;
}
