#include<iostream>
using namespace std;
int main() {
	cout << "bool�ֽڴ�С��" << sizeof(bool) << endl;
	cout << "int�ֽڴ�С��"<<sizeof(int) << endl;
	cout << "short�ֽڴ�С��" << sizeof(short) << endl;
	cout << "long�ֽڴ�С��" << sizeof(long) << endl;
	cout << "float�ֽڴ�С:" << sizeof(float) << endl;
	cout << "double�ֽڴ�С:" << sizeof(double) << endl;
	cout << "char�ֽڴ�С:" << sizeof(char) << endl;
	cout << "intָ���ֽڴ�С:" << sizeof(int*) << endl;
	cout << "floatָ���ֽڴ�С��" << sizeof(float*) << endl;
	cout << "doubleָ���ֽڴ�С��" << sizeof(double*) << endl;
	cout << "charָ���ֽڴ�С��" << sizeof(char*) << endl;
	enum text{ text_1 = 5, text_2 = 10 };
	cout << "ö�������ֽڴ�С��" << sizeof(text_1) << endl;
	cout << "ö�������ֽڴ�С��" << sizeof(text_2) << endl;
	return 0;
}