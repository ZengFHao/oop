#include"CPU.h"



int main() {

    CPU a(P6, 3, 300);
    cout << "cpu a's parameter" << endl;
    a.showinfo(); //��ʾ���ܲ���    
    CPU b;    
    cout << "cpu b's parameter" << endl;
    b.showinfo(); //��ʾ���ܲ���    
    CPU c(a);    
    cout << "cpu c's parameter" << endl;
    c.showinfo(); //��ʾ���ܲ���

}