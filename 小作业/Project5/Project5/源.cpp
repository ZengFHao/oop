#include <iostream>
using namespace std;
int main() {
	char letter='a';
	char num = '0';
	int ASCII=num;
	cout << "�ַ���ASCII�룺" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << num << " : " << ASCII << endl;
		num++;
		ASCII = '0' + i;
	}
	ASCII = letter;
	for (int i = 1; i <= 26;i++) {
		cout << letter <<" : " << ASCII << endl;
		ASCII = 'a' + i;
		letter++;
	}
    cout << "�ַ���ʮ�������룺" << endl;
	num = '0';
	letter = 'a';
	for (int i = 1; i <= 10; i++) {
		cout << num << " : " <<hex<< ASCII << endl;
		num++;
		ASCII = '0' + i;
	}
	ASCII = letter;
	for (int i = 1; i < 26; i++) {
		cout << letter << " : " <<hex<< ASCII << endl;
		ASCII = 'a' + i;
		letter++;
	}
	return 0;
}