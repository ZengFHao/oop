#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#ifndef Lexer
#define Lexer

enum token_type {
	NUMBER,
	PLUS = '+',
	MINUS = '-',
	MUL = '*',
	DIV = '/',
	LP = '(',
	RP = ')',
	PRINT = ';',
	ASS = '=',
	ERR_TOKEN,
	NAME,
	END
};

extern istream* input;
extern double number_value;
extern string string_name;
extern int line;
extern token_type curr_tok;


token_type get_token();
void skip();
#endif // !Lexer






