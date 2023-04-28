#include <iostream>
using namespace std;

struct Month {
	int days;
};
void main() {
	Month Jan, Feb,Mar, Apr, May, June, July, Aug,Sep, Oct, Nov, Dec;
	Jan.days = 31;
	Feb.days = 28 / 29;

	char month[12] = { 'Jan','Feb','Mar','Apr','May','June','July','Aug','Sept','Oct','Nov','Dec'};
	for (int i = 0; i < 12; i++) {
		cout << month[i] << endl;
	}
}