#pragma once
#include <string>
using namespace std;
#ifndef Tree_H
#define Tree_H
struct Tnode
{
    string  word;
    int  count=0;
    Tnode* left;
    Tnode* right;
};

Tnode* regist_word(Tnode*& root, const string& theWord); // ����1
void print_tree(Tnode* root); // ����2
void print_tree_byorder(Tnode* root); // ����3
#endif // !Definition
