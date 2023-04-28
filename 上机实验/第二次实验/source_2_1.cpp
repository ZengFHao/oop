#include <iostream>
#include <string>
using namespace std;

int main(int argc,char *argv[]) {
	for (int i = 1; i < argc; i++) {
		 cout << '"' << "hello," << argv[i] << '"';
	}
	return 0;
}