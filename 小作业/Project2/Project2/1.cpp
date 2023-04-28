#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int* a = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	int t;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (a[i] < a[j]) {
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		cout << a[i] << " ";
	}
	return 0;
}