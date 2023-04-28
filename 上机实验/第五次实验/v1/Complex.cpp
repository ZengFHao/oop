#include "Complex.h"

Complex::Complex() {
	real = 0;
	imagine = 0;
}
Complex::Complex(double i) {
	real = i;
	imagine = 0;
}

Complex::Complex(double i, double k) {
	real = i;
	imagine = k;
}
Complex Complex::operator+(double i) {
	Complex x = *this;
	x.real += i;
	return x;
}
Complex Complex::operator-(double i) {
	Complex x = *this;
	x.real -= i;
	x.imagine -= i;
	return x;
}
Complex Complex::operator*(double i) {
	Complex x = *this;
	x.real *= i;
	x.imagine *= i;
	return x;
}
Complex Complex::operator*(const Complex &i) {
	Complex x = *this;
	x.real *=i.real;
	x.imagine *=i.imagine;
	return x;
}
Complex Complex::operator-(const Complex &i) {
	Complex x = *this;
	x.real -= i.real;
	x.imagine -= i.imagine;
	return x;
}
Complex Complex::operator+(const Complex &i) {
	Complex x = *this;
	x.real += i.real;
	x.imagine += i.imagine;
	return x;
}


void Complex::operator=(const Complex &i) {
	this->real = i.real;
	this->imagine = i.imagine;
}

void Complex::operator=(double i) {
	this->real = i;
}

bool Complex::operator==(const Complex& i) {
	if (real == i.real && imagine == i.imagine) return true;
	else return false;
}

Complex operator-(Complex &i){
	Complex x;
	x.real = -i.real;
	x.imagine = -i.imagine;
	return x;
}


Complex operator+(double i, Complex &c) {
	Complex x = c;
	x.real += i;
	return x;
}

Complex operator*(double i, Complex& c) {
	Complex x = c;
	x.real *= i;
	return x;
}

Complex operator-(double i, Complex &c) {
	Complex x = c;
	x.real =i-x.real;
	return x;
}

ostream& operator<<(ostream& os, Complex& i) {
	if (i.imagine < 0) {
		os << i.real << i.imagine << "i";
	}
	else os << i.real << "+" << i.imagine << "i";
	return os;
}
