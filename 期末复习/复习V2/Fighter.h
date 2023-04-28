#pragma once
#include <string>
#include <iostream>
using namespace std;
class Fighter
{
private:
	string  p;

public:
	Fighter(){}
	Fighter(const string s);
	string gets();
	void outTitle();
	virtual void hello();
};



