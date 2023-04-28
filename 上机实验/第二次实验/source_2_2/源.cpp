#include <iostream>
#include <string>
#include "Tree.h"
#include "Definition.h"
using namespace std;


int main() {
    string theWord;
    getline(cin, theWord);
    Tnode* root = new Tnode;
    root= regist_word(* &root, theWord); //²Ù×÷1
    void print_tree(Tnode * root);//²Ù×÷2
    void print_tree_byorder(Tnode * root);//²Ù×÷3

    return 0;
}