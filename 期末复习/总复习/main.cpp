#include"CPU.h"



int main() {

    CPU a(P6, 3, 300);
    cout << "cpu a's parameter" << endl;
    a.showinfo(); //显示性能参数    
    CPU b;    
    cout << "cpu b's parameter" << endl;
    b.showinfo(); //显示性能参数    
    CPU c(a);    
    cout << "cpu c's parameter" << endl;
    c.showinfo(); //显示性能参数

}