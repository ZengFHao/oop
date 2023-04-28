#include"MyString.h"

int main() {
	MyString s1("0123456789");
	MyString s2(5);
	MyString s3;
	s1.display();
	s2.display();
	s3.display();
	s3 = s1;
	s1.display();
	s3.display();
	s2 = s1 + 3;
	s1.display();
	s2.display();
	s3 = ++++s2;
	s2.display();
	s3.display();
	return 0;


}