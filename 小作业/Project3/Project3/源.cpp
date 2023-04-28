#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
	vector <int> vi;
	ifstream file("D:/c++/Project3/data.txt");
	if (file.good()) {
		int  a;
		while (file >> a) {
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
	}
	else cout << "打开文件失败";
	return 0;
}