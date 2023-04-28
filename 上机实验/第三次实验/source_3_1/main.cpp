#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "Lexer.h"
#include "Paser.h"
#include "Error.h"
using namespace std;

map<string, double> table;
extern bool Eflag;
extern bool firstTime;
int main(int argc, char* argv[]) {
	table["p"] = 3.14;
	table["e"] = 2.71;
	vector<string> fileName;
	
	if (argc == 1) {
		input = &cin;
		while (input) {
			get_token();
			if (curr_tok == END) break;
			if (curr_tok == PRINT) continue;
			double ret = expr(false);
			if(!Eflag)   cout <<"第"<<line<<"行结果：" << ret << endl;
			Eflag = 0;
		}
	}
	else {
		for (int i = 1; i < argc; i++) {
			fileName.push_back(argv[i]);
		}
		for (int i = 1; i < argc; i++) {
			input = new ifstream(fileName[0].c_str());
			if (input->good()) {
				while (input) {
					get_token();
					if (curr_tok == END) break;
					if (curr_tok == PRINT) continue;
					double ret = expr(false);
					if (!Eflag)  cout << "第" << line << "行结果：" << ret << endl;
					Eflag = 0;
				}
				fileName.erase(fileName.begin());
			}
			else {
				error("no file");
			}
			firstTime = 0;
		}
		
	}

	return 0;
}