#include "Expr.h"
#include<iostream>
#include<sstream>
#include<string>
using namespace std;


Expr::Expr() {
	input = &cin;
	inf = 0;
	flag = 0;
}


Expr::token_type Expr::get_token() {
	char ch = 0;
	do {
		input->get(ch);
	} while (ch != '\n' && isspace(ch));

	switch (ch) {
	case '\0':
		return curr_tok = END;
	case '\n':
	case ';':
		return curr_tok = PRINT;
	case '+':
		return curr_tok = PLUS;
	case'-':
		return curr_tok = MINUS;
	case'*':
		return curr_tok = MUL;
	case'/':
		return curr_tok = DIV;
	case'=':
		return curr_tok = ASS;
	case'(':
		return curr_tok = LP;
	case')':
		return curr_tok = RP;
	case'0':
	case'1':
	case'2':
	case'3':
	case'4':
	case'5':
	case'6':
	case'7':
	case'8':
	case'9':
		input->putback(ch);
		*input >> number_value;
		return curr_tok = NUMBER;
	default:
		if (isalpha(ch)) {
			string_name = ch;
			return curr_tok = NAME;
		}
		else {
			cout << "表达式有误" << endl;
			break;
		}

	}
}

double Expr::expr(bool token) {
	double left = term(token);
	for (;;) {
		switch (curr_tok) {
		case PLUS:
			left += term(true);
			break;
		case MINUS:
			left -= term(true);
			break;
		default:
			return left;
		}
	}
}

double Expr::term(bool token) {
	double left = prim(token);
	for (;;) {
		switch (curr_tok) {
		case MUL:
			left *= prim(true);
			break;
		case DIV:
			flag = 1;
			left /= prim(true);
			break;

		default:
			return left;
		}
	}
}

double Expr::prim(bool token) {
	double temp = 0;
	if (token) {
		get_token();
	}
	switch (curr_tok) {
	case NUMBER:
		temp = number_value;
		if (flag == 1 && temp == 0) {
			flag = 0;
			inf = 1;
			return error("0");
		}
		flag = 0;
		get_token();
		return temp;
	case MINUS:
		return -prim(true);
	case LP:
		temp = expr(true);
		if (curr_tok != RP) return error(")");
		get_token();
		return temp;
	case NAME:
		if (get_token() == ASS) {
			temp = expr(true);
			table[string_name] = temp;
			return temp;
		}
		else {
			if (table.count(string_name)) {
				temp = table[string_name];
				return temp;
			}
			else return error("no name");
		}
	default:
		return error("primary expected");
	}

}
double Expr::error(string) {
	cout << "表达式有误" << endl;
	Eflag = 1;
	return false;
}

void Expr::print() {
	double ret = expr(false);
	if (!Eflag)   cout  << ret << endl;
	Eflag = 0;
}

istream* Expr::getinput() {
	return input;
}
Expr::token_type Expr::getcurr_tok() {
	return curr_tok;
}