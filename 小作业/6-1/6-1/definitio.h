#pragma once
#include <iostream>
#include "Stack.h"

#ifndef definitio_H
#define definitio_H
typedef struct Snode* NodePTR;

struct Snode {    //链表结点 

    ElemType data;
    struct Snode* next;

};

struct Node {
    NodePTR top;   //栈顶指针（单链表头指针），空栈时为空指针(0,NULL或nullptr) 

};
bool InitStack(Stack& S)

{
    S.top = nullptr;
    return true;
}



bool isEmpty(Stack S)
{
    return (S.top == nullptr);
}

ElemType GetTop(Stack S)
{
    return S.top->data;
}



bool Push(Stack& S, ElemType e)
{
    NodePTR p = (NodePTR)malloc(sizeof(struct Snode));
    if (!p)
        return false;
    p->data = e;
    p->next = S.top;
    S.top = p;
    return true;

}

void Pop(Stack& S)
{
    NodePTR p = S.top;
    S.top = S.top->next;
    free(p);
}
#endif //definitio_H