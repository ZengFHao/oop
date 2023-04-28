#include"Stack.h"
#include"Stack.cpp"
#include<iostream>

int main() {
	
	Stack<int> S; 
	S.push(1);
	S.push(2);
	S.push(3);
	cout << "The stack length" << S.getLength()<< endl;
	cout << "The top element is : " << S.getpop() << endl;
	S.pop();
	S.pop();
	S.pop();
	S.pop();

	return 0;

}
