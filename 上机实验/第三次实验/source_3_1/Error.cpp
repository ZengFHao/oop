#include"Error.h"
#include"Lexer.h"
#include <iostream>

bool Eflag = 0;
bool firstTime = 0;

double error(string s) {
	if (!firstTime) {
		line++;
		firstTime = 1;
	}
	if(s == "bad_token") cout << "��" << line << "�з����Ƿ��������" << endl;
	else if (s == ")")  cout << "��" << line << "�з���ȱ�������Ŵ���" << endl;
	else if (s == "0") cout << "��" << line << "�з�������Ϊ0����" << endl;
	else if(s=="primary expected")  cout << "��" << line << "�б��ʽ��������" << endl;
	else if (s == "no file")  cout << "��" << line << "�д��ļ�ʧ��" << endl;
	else if(s=="no name") cout << "��" << line << "����δ��ֵ���ַ�����" << endl;
	else cout << "��" << line << "�з�����δ֪����" << endl;
	skip();
	Eflag = 1;
	return false;
}