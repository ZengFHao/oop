#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector <string > vi;
	ifstream file("D:/c++/Project4/words.txt");
	if (file.good()) {
		string s;
		while (file >> s) {
			vi.push_back(s);
		}
		sort(vi.begin(),vi.end());
		cout << endl << "�ֵ�����Ϊ��" << endl;
		for (int i = 0; i < vi.size(); i++) {
			cout << vi[i]<<" ";
		}
		for (int i = 0; i < vi.size(); i++) {
			for (int j = i + 1; j < vi.size() && i != vi.size(); j++) {
				if (vi[i] == vi[j]) {
					vi[j] = "1";
				}
			}
		}
		int count = 0;
		for (int i = 0; i < vi.size(); i++) {
			if (vi[i] != "1") count++;
		}
		cout << endl<<endl << "��ͬ���ʵ���Ŀ��" << count << endl;
		cout << endl << "�������ʳ��ִ���Ϊ��" << endl;
		for (int i = 0; i < vi.size(); i++) {
			int flag = 1;
			if (vi[i] != "1") {
				for (int j = i ; j!=vi.size()-1&&vi[j+1] == "1"; j++) {
					flag++;
				}
				cout << vi[i] << ":" << flag << endl;
			}
		}
	}
	else cout << "���ļ�ʧ��";
	return 0;
}