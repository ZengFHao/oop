#include"Queue.h"
#include"Complex.h"

int complex::c = 0;
int main() {
    /*
    * Queue q;
    --q;                                  // Display£ºThe queue is empty!
    q = q + 5 + 6 + 3;
    cout << q;                      // Display£º5   6   3 
    cout << --q << endl;      // Display£º5 
    cout << q;                      // Display£º6   3 
    q = 9 + q;
    cout << q;                      // Display£º6   3   9
    q = 2 + q;                      // Display£ºThe queue is full! 
    cout << q;                     // Display£º6   3   9 

    
    */
    int i = 5;
    double  d = 0;
    complex cxa(1.3, -2), cxb = 2.5, cxc = { 1,-1 };
    complex cxd = cxb;

    //cout << 10 + i << endl;
    //cout << d + i << endl;
    //cout << d + cxa << endl;
    //cout << cxc + (complex)10 << endl;
    //cout << i + d + cxb << endl;
    //cxb = cxa + (complex)i;
    //cout << cxb << endl;
    //cxd = cxa += cxb + cxc;
    cout << cxd << endl;

    complex::c = 1;
    cxd.c = 2;
    cout << complex::c << endl;
    cout << cxd.c << endl;
    return 0;

}