#include <iostream>
using namespace std;

struct X {

    int i;

    X(int j) {
        i = j;
    }

   

    X operator+(int j) {
        i += j;
        return this->i;
    }
   
    operator int() {
        return i;
    }
};

struct Y {

    int i;

    Y(X x) {
        i = x.i;
    }

     Y operator+( X x) {
        i += x.i;
    }

      operator int() {
        return i;
    }

};

extern X operator*(X &x, Y &y) {
    return x.i * y.i;
}

extern int f(int i) {
    return i;
}

X x = 1;

Y y = x;

int i = 2;



int main() {

    cout << "i+10= " << i + 10 << endl;    //(1)


    cout << "x+y+i= " << x + y + i << endl; //(4)

    cout << "x*x+i= " << x * x + i<<endl;  //(5)

    cout << "f(7)= " << f(7) << endl;         //(6)

    cout << "f(y)=" << f(y);         //(7)

    cout << "y+y= " << y + y << endl;     //(8)

    cout << "10+y= " << 10 + y << endl;;    //(9)

}