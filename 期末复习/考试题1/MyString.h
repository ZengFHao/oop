#pragma once
#include <iostream>
#include <string>
using namespace std;
class MyString
{
private:
	string s;
	int flag;
public:
	MyString(int x=0):flag(x) {
		s = "";
	}
	MyString(const string& s) {
		this->s = s;
		flag = -1;
	}
	MyString(const MyString& s) {
		this->flag = s.flag;
		this->s = s.s;
	}
	/*MyString operator=(const MyString& s) {
		//MyString t = s;
		return s;
	}
	*/
	void display() {
		if (flag == -1) {
			cout << "[" << this->s << "]" << endl;
		}
		else {
			cout << "[";
			for (int i = 0; i < flag; i++) {
				cout << " ";
			}
			cout << "]" << endl;
		}
		
	}

	MyString operator+(int num) {
		MyString t;
		t = *this;
		t.s.erase(0, num );
		return t;
	}
	MyString& operator++() {
        this->s.erase(0,1);
		return *this;
	}

};

