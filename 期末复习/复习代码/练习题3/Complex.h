#pragma once
class complex {

    double re, im;
   
public:
    static int c;
    complex(double r = 0, double i = 0) : re(r), im(i) {  }

    complex(const complex& a) :re(a.re), im(a.im) {  }

    operator double() const { return re; }

    complex& operator+= (complex a) {
        re = re + a.re;
        im = im + a.im;
        return *this;
    }

    complex operator+ (complex a) {
        re = re + a.re;
        im = im + a.im;
        return *this;
    }

    friend ostream& operator<<(ostream& oo, const complex& a);

};

ostream& operator<<(ostream& os, const complex& a) {
    os << "re: " << a.re << " im: " << a.im ;
    return os;
}


