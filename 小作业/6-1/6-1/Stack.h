#pragma once
#ifndef Stack_H
#define Stack_H
typedef int ElemType;
typedef struct Node Stack;

bool InitStack(Stack& S);
bool isEmpty(Stack S);
ElemType GetTop(Stack S);
bool Push(Stack& S, ElemType e);
void Pop(Stack& S);


#endif // !Stack_H

