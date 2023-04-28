#include<iostream>
using namespace std;
int main() {
	cout << "bool字节大小：" << sizeof(bool) << endl;
	cout << "int字节大小："<<sizeof(int) << endl;
	cout << "short字节大小：" << sizeof(short) << endl;
	cout << "long字节大小：" << sizeof(long) << endl;
	cout << "float字节大小:" << sizeof(float) << endl;
	cout << "double字节大小:" << sizeof(double) << endl;
	cout << "char字节大小:" << sizeof(char) << endl;
	cout << "int指针字节大小:" << sizeof(int*) << endl;
	cout << "float指针字节大小：" << sizeof(float*) << endl;
	cout << "double指针字节大小：" << sizeof(double*) << endl;
	cout << "char指针字节大小：" << sizeof(char*) << endl;
	enum text{ text_1 = 5, text_2 = 10 };
	cout << "枚举类型字节大小：" << sizeof(text_1) << endl;
	cout << "枚举类型字节大小：" << sizeof(text_2) << endl;
	return 0;
}