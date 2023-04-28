
#ifndef Date_H
#define Date_H

struct Date {
	int day;
	int month;
	int year;
};

void addTime(Date time);
int searchDay(Date time);
void day1(Date time);
#endif // !Date
