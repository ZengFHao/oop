#include<iostream>
#include "Stack.h"
#include "definitio.h"
using namespace std;


int main()

{//�Զ���ջ���� 

    Stack S1;
    ElemType e;
    if (!InitStack(S1))
        return -1;

    Push(S1, 10);
    Push(S1, 20);
    Push(S1, 30);
    while (!isEmpty(S1)) {
        e = GetTop(S1);
        Pop(S1);
        std::cout << e << std::endl;
    }
    return 0;

}
//�Զ���ջʵ��(implementation)

