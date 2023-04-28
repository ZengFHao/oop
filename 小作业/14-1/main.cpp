#include "Base.h"
class Clock {
	int h1, m1;
	int* s1=new int;

public:
	Clock() {
		 h1 = m1  = 0;
		 *s1 = 0;
	}
	void get(int& h, int& m, int* s) {
		h = h1;
		*s = *s1;
		m = m1;
	}
	bool adjust(int h, int m, int s) {
		if (h >= 0 && h <= 24 && m >= 0 && m <= 60 && s >= 0 && s <= 60) {
			h1 = h;
			m1 = m;
			*s1 = s;
			return true;
		}
		else return false;
	}
	void update() {
		(*s1)++;
		if (*s1 == 60) {
			m1++;
			*s1 = 0;
		}
		if (m1 == 60) {
			h1++;
			m1 = 0;
		}
		if (h1 == 24) {
			h1 = 0;
		}
	}
	friend ostream& operator<<(ostream& os, Clock C);
};

ostream& operator<<(ostream& os, Clock C) {
	os << C.h1 << ":" << C.m1 << ":" << *C.s1 ;
	return os;
}
int main() {

    int h, m, s;

    Clock  testClock;

    testClock.get(h, m, &s);

    cout << "OUT-1: " << h << ":" << m << ":" << s << endl; // OUT-1: 0:0:0

    testClock.adjust(13, 5, 59);

    testClock.update();

    cout << "OUT-2: " << testClock << endl; // OUT-2: 13:6:0

    testClock.adjust(23, 59, 58);

    testClock.update();

    cout << "OUT-3: " << testClock << endl; // OUT-3: 23:59:59

    testClock.update();

    cout << "OUT-4: " << testClock << endl; // OUT-4: 0:0:0

    return 0;

}