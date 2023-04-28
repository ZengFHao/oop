#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int >  vi;
	int  a=0;
	while (a != EOF) {
		vi.push_back(a);
	}
	int t;
	for (int i = 0; i < vi.size(); i++) {
		for (int j = 0; j < vi.size(); j++) {
			if (vi[i] < vi[j]) {
				t = vi[j];
				vi[j] = vi[i];
				vi[i] = t;
			}
		}
	}
	for (int i = 0; i < vi.size(); i++) {
		cout << vi[i] << " ";
	}
	return 0;
}