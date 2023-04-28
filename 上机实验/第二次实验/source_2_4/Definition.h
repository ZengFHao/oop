#include <iostream>
#include "Date.h"

using namespace std;

#ifndef Definition_H
#define Definition_H
void addTime(Date time) {
	Date today = time;
	if (time.month == 2 && time.year == 29) {
		today.year++;
		today.day--;
	}
	else today.year++;
	cout << time.year << " " << time.month << " " << time.day << "加一年后日期为" << today.year << " " << today.month << " " << today.day << endl;
	today = time;
	if (today.day == 31 && (today.month == 3 || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10)) {
		today.month++;
		today.day--;
	}
	else if (today.day == 31 && time.month == 12) {
		today.year++;
		today.month = 1;
	}
	else if (today.day == 31 && time.month == 1) {
		today.month++;
		if ((time.year % 4 == 0 && time.year % 100 != 0) || time.year % 400 == 0) today.day = 29;
		else today.day = 28;
	}
	else today.month++;
	cout << time.year << " " << time.month << " " << time.day << "加一月后日期为" << today.year << " " << today.month << " " << today.day << endl;
	today = time;
	if (today.day == 31 && today.month != 12) {
		today.month++;
		today.day = 1;
	}
	else if (today.day == 31 && today.month == 12) {
		today.year++;
		today.month = 1;
		today.day = 1;
	}
	else if (today.day == 30 && (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11)) {
		today.month++;
		today.day = 1;
	}
	else if (today.day == 29 && today.month == 2) {
		today.month++;
		today.day = 1;
	}
	else if (today.day == 28 && today.month == 2 && (!(time.year % 4 == 0 && time.year % 100 != 0) || time.year % 400 == 0)) {
		today.month++;
		today.day = 1;
	}
	else today.day++;
	cout << time.year << " " << time.month << " " << time.day << "加一日后日期为" << today.year << " " << today.month << " " << today.day << endl;
}
int searchDay(Date time) {
	int dayNum = 0;
	int dayDet = 0;
	int base = 6;//2022年1月1日为周六
	if (time.year >= 2022) {
		for (int i = 2022; i < time.year; i++) {
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) dayNum += 366;
			else dayNum += 365;
		}
		for (int i = 1; i < time.month; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				dayNum += 31;
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11) {
				dayNum += 30;
			}
			else if (i == 2 && ((time.year % 4 == 0 && time.year % 100 != 0) || time.year % 400 == 0)) {
				dayNum += 29;
			}
			else dayNum += 28;
		}
		dayNum += (time.day - 1);
	}
	else {
		for (int i = 2022; i > time.year; i--) {
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) dayNum += 366;
			else dayNum += 365;
		}
		for (int i = 1; i < time.month; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				dayDet += 31;
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11) {
				dayDet += 30;
			}
			else if (i == 2 && ((time.year % 4 == 0 && time.year % 100 != 0) || time.year % 400 == 0)) {
				dayDet += 29;
			}
			else dayDet += 28;
		}
		if ((time.year % 4 == 0 && time.year % 100 != 0) || time.year % 400 == 0) {
			dayNum += (366 - dayDet - time.day);
		}
		else {
			dayNum += (365 - dayDet - time.day);
		}
	}
	dayNum = dayNum % 7;
	base += dayNum;
	base %= 7;
	if (base == 0) base = 7;
	return base;
}
void day1(Date time) {
	cout << time.year << "年" << time.month << "月" << time.day << "后的第一个周一是：";
	int base = searchDay(time);//知道该日是周几
	int flag = 1;
	if (base == 1) {
		flag = 0;
		time.day += 7;
	}
	for (int i = 0; i < 7 && flag == 1; i++) {
		if (base % 7 == 1) flag = 0;
		else {
			time.day++;
			base++;
		}
	}
	cout << time.year << "年" << time.month << "月" << time.day << endl;
}
#endif // !Definition_H


