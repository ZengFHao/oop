#include <iostream>
#include <string>
#include <map>
#include "Paser.h"
#include "Lexer.h"
#include "Error.h"

bool flag = 0;
bool inf = 0;
extern map<string, double> table;
double expr(bool token) {
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

double term(bool token) {
	double left = prim(token);
	for (;;) {
		switch (curr_tok) {
		case MUL:
			left*= prim(true);
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

double prim(bool token) {
	double temp = 0;
	if (token) {
		get_token();
	}
	switch(curr_tok) {
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
		temp=expr(true);
		if (curr_tok != RP) return error(")");
		get_token();
		return temp;
	case NAME:
		if (get_token() == ASS) {
			temp = expr(true);
			table[string_name] = temp;
			return temp;
		}
		else{
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