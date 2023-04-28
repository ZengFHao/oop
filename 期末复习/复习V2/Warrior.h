#pragma once
#include "Fighter.h"
class Warrior :public Fighter
{
private:
	string s1,s2;
public:
	Warrior(const string, Fighter*);
	void hello();
};

