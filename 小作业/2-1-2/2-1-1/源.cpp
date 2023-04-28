#include <iostream>
using namespace std;
void swap(int*, int*);
int main() {
	int m = 0;
	int n = 0;
	cout << "属于两个交换量"<<endl;
	cin >> m;
	cin >> n;
	int* p = &m;
	int* q = &n;
	swap(*p, *q);
	cout << *p <<" " <<* q << endl;
	return 0;
}

void swap(int &m, int &n) {
	int t;
	t = m;
	m = n;
	n = t;
}