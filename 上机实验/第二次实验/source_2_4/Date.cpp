#include <iostream>
#include <string>
#include "Date.h"
#include "Definition.h"
using namespace std;


int main() {
	Date today{};
	int base;//����ܼ�
	cin >> today.year >> today.month >> today.day;
	if (today.year < 1 || today.month < 1 || today.month>12 || today.day < 1 || today.day>31) {
		cout << "��������";
		return 0;
	}
	addTime(today);
	base=searchDay(today);
	cout << today.year << "��" << today.month << "��" << today.day << "����" << base << endl;
	day1(today);
	return 0;
}