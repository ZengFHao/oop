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
	if(s == "bad_token") cout << "第" << line << "行发生非法输入错误" << endl;
	else if (s == ")")  cout << "第" << line << "行发生缺少右括号错误" << endl;
	else if (s == "0") cout << "第" << line << "行发生除数为0错误" << endl;
	else if(s=="primary expected")  cout << "第" << line << "行表达式发生错误" << endl;
	else if (s == "no file")  cout << "第" << line << "行打开文件失败" << endl;
	else if(s=="no name") cout << "第" << line << "行有未赋值的字符存在" << endl;
	else cout << "第" << line << "行发生了未知错误" << endl;
	skip();
	Eflag = 1;
	return false;
}