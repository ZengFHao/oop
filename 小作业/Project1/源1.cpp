#include <iostream>
using name std;
int main() {
	int num;
	cin >> num;
	int a[num];
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	int t;
	for (int i = 0; i < num; i++) {
		for (int j = o; j < num; i++) {
			if (a[i] > a[j]) {
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	cout << a;
	return 0;
}