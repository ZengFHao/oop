#include "Vet4.h"

Vet4::Vet4() {
	f1 = f2 = f3 = f4 = 0;
}
Vet4::Vet4(float v1, float v2, float v3, float v4) {
	f1 = v1;
	f2 = v2;
	f3 = v3;
	f4 = v4;
}
Vet4 Vet4::operator+(const Vet4& other) {
	Vet4 x = *this;
	x.f1 += other.f1;
	x.f2 += other.f2;
	x.f3 += other.f3;
	x.f4 += other.f4;
	return x;
}

Vet4 Vet4::operator-(const Vet4& other) {
	Vet4 x = *this;
	x.f1 -= other.f1;
	x.f2 -= other.f2;
	x.f3 -= other.f3;
	x.f4 -= other.f4;
	return x;
}

Vet4 Vet4::operator*(const Vet4& other) {
	Vet4 x = *this;
	x.f1 *= other.f1;
	x.f2 *= other.f2;
	x.f3 *= other.f3;
	x.f4 *= other.f4;
	return x;
}

Vet4 Vet4::operator/(const Vet4& other) {
	Vet4 x = *this;
	x.f1 /= other.f1;
	x.f2 /= other.f2;
	x.f3 /= other.f3;
	x.f4 /= other.f4;
	return x;
}

Vet4& Vet4::operator+=(const Vet4& other) {
	*this=*this + other;
	return *this;
}
Vet4& Vet4::operator-=(const Vet4& other) {
	*this = *this - other;
	return *this;
}
Vet4& Vet4::operator*=(const Vet4& other) {
	*this = *this * other;
	return *this;
}
Vet4& Vet4::operator/=(const Vet4& other) {
	*this = *this / other;
	return *this;
}
Vet4 Vet4::operator=(const Vet4& other) {
	f1 = other.f1;
	f2 = other.f2;
	f3 = other.f3;
	f4 = other.f4;
	return *this;
}
Vet4 Vet4::operator=(float i) {
	f1 = f2 = f3 = f4 = i;
	return *this;
}

float Vet4:: operator[](int i) {
	if (i > 3) {
		cout << "biggest index is 3 !!!  " ;
		return FLT_MAX;
	}
	else {
		float* res = (float*)this;
		return res[i];
	}
}




ostream& operator<<(ostream& os, Vet4& v) {
	os << "f1=" << v.f1 << "  f2=" << v.f2 << "  f3=" << v.f3 << "  f4=" << v.f4;
	return os;
}