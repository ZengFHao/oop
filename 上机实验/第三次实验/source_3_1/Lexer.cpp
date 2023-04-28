#include "Lexer.h"
#include<iostream>
#include "error.h"
using namespace std;

istream* input;
double number_value;
string string_name;
int line=0;
token_type curr_tok;
extern bool firstTime;
token_type get_token() {
	char ch = 0;
	do {
		input-> get(ch);
	} while (ch != '\n' && isspace(ch));

	switch(ch) {
	    case '\0':
			return curr_tok = END;
	    case '\n':
		case ';': 
			line++;
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
			return curr_tok=NUMBER;
		default:
			if (isalpha(ch)) {
				string_name = ch;
				return curr_tok = NAME;
			}
			else {
				firstTime = 0;
				error("bad_token");
			}
			
	}
}
void skip() {
	char ch = 0;
	while (ch != ';') {
		input->get(ch);
	}
}