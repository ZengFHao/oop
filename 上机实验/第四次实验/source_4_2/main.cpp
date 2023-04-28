#include"Expr.h"
#include <string>
#include <iostream>
#include<map>
							
int main() {
	Expr Expr;
	while (Expr.getinput()) {
		Expr.get_token();
		if (Expr.getcurr_tok() == Expr::token_type::END) break;
		if (Expr.getcurr_tok() == Expr::token_type::PRINT) continue;
		Expr.print();
	}
}