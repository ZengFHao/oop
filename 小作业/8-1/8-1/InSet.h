#include <iostream>
using namespace std;

class InSet
{
	int size;
	int capacity;
	int* p;

public:
	InSet();
	InSet(int n);
	InSet(const InSet& a);
	~InSet();
	void add(int  elem);
	InSet Intersection(InSet A, InSet B);
	InSet AddSet(InSet A, InSet B);
	InSet DifferenceSet(InSet A, InSet B);
	void printf(InSet A);
	friend ostream& operator<<(ostream& os, const InSet& A);
};

