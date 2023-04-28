#include <iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	char* p = &a;
	cout << (int*)p << "" << p + 1 << endl;
	return 0;
}