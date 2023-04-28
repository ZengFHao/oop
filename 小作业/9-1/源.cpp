#include<iostream>

using namespace std;
class  init{
public:
	init();
	~init();
};
init::init() {
	cout << "Initialize" << endl;
}
init::~init() {
	cout << "Clean up" << endl;
}
int main()

{

cout << "Hello, world!\n";


}
init i;

