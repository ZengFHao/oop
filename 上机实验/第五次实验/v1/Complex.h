#pragma once
#include<iostream>
using namespace std;

class Complex
{
private:
	double real, imagine;
public:
	Complex();
	Complex(double);
	Complex(double ,double);
	Complex  operator+(double);
	Complex  operator-(double);
	Complex  operator*(double);
	
	Complex  operator+(const Complex&);
	Complex  operator-(const Complex&);
	Complex  operator*(const Complex&);
	
	
	void operator=(const Complex&);
	void operator=(double);
	bool operator==(const Complex &);
	friend ostream& operator<<(ostream&,  Complex&);
	friend Complex operator-(Complex &);
	friend Complex operator+(double, Complex&);
	friend Complex operator*(double, Complex&);
	friend Complex operator-(double, Complex&);
	friend istream& operator>>(istream&, Complex&);
};

Complex operator+(double,Complex&);
Complex operator-(double, Complex);
Complex operator-(Complex&);
Complex operator*(double, Complex);
ostream& operator<<(ostream &,Complex&);

