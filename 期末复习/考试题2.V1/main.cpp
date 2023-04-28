#include"Integer.h"


#include <iostream>
using namespace std;

class Point {
private:
	double x;
	double y;

	Point() {
		this->x = 0.0;
		this->y = 0.0;
	}
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	Point(double x = 0.0, double y = 0.0) {
		this->x = x;
		this->y = y;
	}
	Point(const Point& P) {
		this->x = P.x;
		this->y = P.y;
	}
	void set(double x, double y) {
		this->x = x;
		this->y = y;
	}



	friend double range(Point p1, Point p2);
};
double range(Point p1, Point p2) {
	double Range;
	double x = p1.x - p2.x;
	double y = p1.y - p2.y;
	Range = sqrt(pow(x, 2) + pow(y, 2));
	cout << Range;
	return Range;
}
class curve {
private:
	double* pxs;
	double* pys;
	int count;

public:
	curve() {
		count = 0;
		pxs = new double;
		pys =new double;
	}

	void setPxs(double x) {
		*pxs = x;
		pxs++;
	}

	void setPys(double y) {
		*pys = y;
		pys++;
	}

	double* getPxs() {
		return pxs;
	}
	double* getPys() {
		return pys;
	}

	int getCount() {
		return count;
	}
	void setCount() {
		count++;
	}
};

class curve1 :public curve {
public:
	void setPys1(double x) {
		setCount();
		setPxs(x);
		setPys(3 * x * x + 2 * x + 1);
	}
};

class curve2 :public curve {
public:
	void setPys1(double x) {
		setCount();
		setPxs(x);
		setPys(x + 1);
	}
};

int main() {
	curve c;
	curve1 c1;
	cout << "**********";
	for (double i = 0; i < 10; i += 0.5) {
		c1.setPys1(i);
	}
	cout << "**********";
	while (*c1.getPxs() < 10) {
		cout << *c1.getPys();
	}

	return 0;
}