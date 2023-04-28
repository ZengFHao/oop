#include<string>
#include<map>
#include <fstream>
using namespace std;
class Expr
{
public:
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
	Expr();
	Expr(string);
	void print();
	token_type get_token();
	double expr(bool);
	double term(bool);
	double prim(bool);

	double error(string);
	map<string, double> table;

	istream* getinput();
	token_type getcurr_tok();

private:
	token_type curr_tok;
	string s;
	istream *input;
	double number_value;
	string string_name;
	bool Eflag;
	bool firstTime;
	bool flag;
	bool inf;
};

