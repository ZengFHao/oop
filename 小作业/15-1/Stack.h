#pragma once
#include <iostream>
#include <vector>
using namespace std;
template<class T>
class Stack
{
private:
	vector<T> buf;
public:
	Stack();
	void push(T data);
	void pop();
	T getpop();
	int getLength();
	bool empty();
	void clear();
};

