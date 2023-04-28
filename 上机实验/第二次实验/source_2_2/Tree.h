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

Tnode* regist_word(Tnode*& root, const string& theWord); // ²Ù×÷1
void print_tree(Tnode* root); // ²Ù×÷2
void print_tree_byorder(Tnode* root); // ²Ù×÷3
#endif // !Definition
