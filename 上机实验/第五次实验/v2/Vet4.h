#pragma once

#include<iostream>
using namespace std;

class Vet4
{
private:
	float f1, f2, f3, f4;
public:
	Vet4();
	Vet4(float, float, float, float);
	Vet4 operator+(const Vet4&);
	Vet4 operator-(const Vet4&);
	Vet4 operator*(const Vet4&);
	Vet4 operator/(const Vet4&);
	Vet4& operator+=(const Vet4&);
	Vet4& operator-=(const Vet4&);
	Vet4& operator*=(const Vet4&);
	Vet4& operator/=(const Vet4&);
	Vet4 operator=(const Vet4&);
	Vet4 operator=(float);
	float operator[](int);

	friend ostream& operator<<(ostream&, Vet4&);
};

ostream& operator<<(ostream&, Vet4&);
