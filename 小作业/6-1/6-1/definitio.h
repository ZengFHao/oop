#pragma once
#include <iostream>
#include "Stack.h"

#ifndef definitio_H
#define definitio_H
typedef struct Snode* NodePTR;

struct Snode {    //������ 

    ElemType data;
    struct Snode* next;

};

struct Node {
    NodePTR top;   //ջ��ָ�루������ͷָ�룩����ջʱΪ��ָ��(0,NULL��nullptr) 

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