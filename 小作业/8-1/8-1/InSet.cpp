#include "InSet.h"

using namespace std;

InSet :: InSet() {
	size = 0;
	capacity = 0;
	p = NULL;
}
 InSet::InSet(int n) {
	 size = 0;
	 capacity = n;
	 p = NULL;
}

 InSet::InSet(const InSet& a) {
	 size = a.size;
	 capacity = a.capacity;
	 p = a.p;
 }
 InSet::~InSet() {
	
 }
 void InSet::add(int elem) {
	 if (size == capacity) {
		 int* temp = new int[2 * capacity+1];
		 for (int i = 0; i < this->size; i++) {
			 temp[i] = p[i];
		 }
		 this->size = size;
		 this->capacity = 2 * capacity+1;
		 delete []p;
		 p = temp;
	 }
	 int flag;
	 for (flag = 0; flag < this->size; flag++) {
		 if (elem == p[flag]) break;
	 }
	 if (flag == this->size) {
		 p[size] = elem;
		 this->size++;
	 }
 }
 InSet InSet::Intersection(InSet A, InSet B) {
	 InSet C;
	 for (int i = 0; i < A.size; i++) {
		 for (int k = 0; k < B.size; k++) {
			 if (A.p[i] == B.p[k]) C.add(A.p[i]);
		 }
	 }
	 return C;
 }
 InSet InSet::AddSet(InSet A, InSet B) {
	 InSet C = B;
	 bool flag = 1;
	 for (int i = 0; i < A.size; i++) {
		 for (int k = 0; k < B.size; k++) {
			 if (A.p[i] == B.p[k]) {
				 flag = 0;
				 break;
			 }
		 }
		 if (flag) {
			 C.add(A.p[i]);
		 }
		 flag = 1;
	 }
	 return C;
 }

 InSet InSet::DifferenceSet(InSet A, InSet B) {
	 InSet C = Intersection(A, B);
	 InSet ret;
	 bool flag = 1;
	 for (int i = 0; i < A.size; i++) {
		 for (int k = 0; k < C.size; k++) {
			 if (A.p[i] == C.p[k]) {
				 flag = 0;
				 break;
			 }
		 }
		 if (flag) {
			 ret.add(A.p[i]);
		 }
		 flag = 1;
	 }
	 for (int i = 0; i < B.size; i++) {
		 for (int k = 0; k < C.size; k++) {
			 if (B.p[i] == C.p[k]) {
				 flag = 0;
				 break;
			 }
		 }
		 if (flag) {
			 ret.add(B.p[i]);
		 }
		 flag = 1;
	 }
	 return ret;
 }
 ostream& operator<< (ostream& os, const InSet& A) {
	 for (int i = 0; i < A.size; i++) {
		 os << A.p[i] << " ";
	 }
	 os << endl;
	 return os;

 }
 void InSet::printf(InSet A) {
	 cout << A;
 }
 
int main() {
	InSet A, B;
	int s1[] = { 1,2,3,4,5,1,2 };
	int s2[] = { 1,3,5,7,9,7,9 };
	for (int i = 0; i < (sizeof(s1)/sizeof(s1[0])); i++) {
		A.add(s1[i]);
	}
	for (int i = 0; i < (sizeof(s2) / sizeof(s2[0])); i++) {
		B.add(s2[i]);
	}
	InSet sum, difference, intersection;
	sum=sum.AddSet(A, B);
	intersection=intersection.Intersection(A, B);
	difference=difference.DifferenceSet(A, B);
	cout << "A: ";
	A.printf(A) ;
	cout << "B: ";
	B.printf(B) ;
	cout << "sum: ";
	sum.printf(sum);
	cout << "intersection: ";
	intersection.printf(intersection);
	cout << "difference: ";
	difference.printf(difference);
	return 0;
}
