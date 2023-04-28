#include <iostream>
#include<string>

using namespace std;

class Date {

public:

    class Bad_date {  };   //exception class

    Date(int yy = 0, int mm = 0, int dd = 0);     //0 means “pick a default”

    //functions for examining the Date

    int day() const {
        return d;
    }

    int month() const {
        return m;
    }

    int year() const {
        return y;
    }



    string string_rep() const {
        string s;
        if (m < 10 && d>10) {
            s = to_string(y) + '.' + '0' + to_string(m) + '.' + to_string(d);
        }
        else if (m > 10 && d > 10) {
            s = to_string(y) + '.' + to_string(m) + '.' + to_string(d);
        }
        else if (m > 10 && d < 10) {
            s = to_string(y) + '.' + to_string(m) + '.' + '0' + to_string(d);
        }
        else {
            s = to_string(y) + '.' + '0' + to_string(m) + '.' + '0' + to_string(d);
        }

        return s;
    }      //string representation of the Date, e.g. “2000.2.1”

    void char_rep(char s[]) const {
        s[0] = y;
        s[1] = m;
        s[2] = d;
    }  //C-style string representation

    int days[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31} };

    static void set_default(int, int, int);



    // functions for changing the Date

    Date& add_year(int n);     //add n years

    Date& add_month(int n);  //add n months

    Date& add_day(int n);     //add n days

    bool isvalid(int, int, int);

private:

    int y, m, d;               //year,month,day

    static Date default_date;

};


    int main()

{

    try {

        Date d1;

        cout << d1.year() << "-" << d1.month() << "-" << d1.day() << endl;

        Date d2(2020, 01, 23);

        cout << d2.string_rep() << endl;

        cout << d2.string_rep() << "加十年后日期：";
        Date d4 = d2.add_year(10);
        cout <<d4.string_rep()<< endl;

        cout << d2.string_rep() << "加十月后日期：";
        Date d5 = d2.add_month(10);
        cout  << d5.string_rep() << endl;

        cout << d2.string_rep() << "加二十月后日期：";
        Date d6 = d2.add_month(20);
        cout << d6.string_rep() << endl;

        cout << d2.string_rep() << "加十五天后日期：";
        Date d7 = d2.add_day(15);
        cout << d7.string_rep() << endl;

        cout << d2.string_rep() << "加二十天后日期：";
        Date d8 = d2.add_day(20);
        cout << d8.string_rep() << endl;

        Date::set_default(2001, 2, 29);

        Date d3;

        cout << d3.string_rep() << endl;



    }

    catch (Date::Bad_date) {

        cout << "A bad date!\n" << endl;

    }
   

    return 0;

}



Date Date::default_date = { 1970,1,1 };



void Date::set_default(int year, int month, int day) {

    default_date.y = year;

    default_date.m = month;

    default_date.d = day;


    if (!default_date.isvalid(year, month, day))

        throw Bad_date();

}



Date::Date(int yy, int mm, int dd) {

    y = yy ? yy : default_date.y;

    m = mm ? mm : default_date.m;

    d = dd ? dd : default_date.d;

    if (!isvalid(y, m, d))

        throw Bad_date();

}

bool Date::isvalid(int y, int m, int d) {
    if (y < 1||m>12||m<1||d<1||d>31) return false;
    else {
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            if (d > 30) return false;
        }
        else if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 100 == 0)) {
            if (m == 2 && d > 29) return false;
        }
        else {
            if (m == 2 && d > 28) return false;
        }
    }
    return true;
}

Date& Date::add_year(int n) {
    y += n;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 100 == 0)) {
        if (m == 2 && d == 29) {
            d=28;
        }
    }

    return *this;
}

Date& Date::add_month(int n) {
    m += n;
    while (m > 12) {
        y++;
        m -= 12;
    }
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 100 == 0)) {
        if (d > days[1][m]) d = days[1][m];
    }
    else {
        if (d > days[0][m]) d = days[0][m];
    }
    return *this;
}

Date& Date::add_day(int n) {
    d += n;
    while (d > 31) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 100 == 0)) {
            if (d > days[1][m]) {
                d -= days[1][m];
                m++;
            }
        }
        else {
            if (d > days[0][m]) {
                d -= days[0][m];
                m++;
            }
        }
        if (m > 12) {
            m = 1;
            y++;
        }
    }
    return *this;
}

