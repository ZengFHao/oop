#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int  main(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
		ifstream fin(argv[i]);
		if (!fin.is_open()) {
			cout<<"文件打开失败"<<endl;
		}
		else {
			string s;
				while (fin >> s) {
					cout<<"argv["<<i<<"]:"<<s<<endl;
			}
		}
	}
	return 0;
}