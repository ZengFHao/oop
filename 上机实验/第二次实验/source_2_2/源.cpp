#include <iostream>
#include <string>
#include "Tree.h"
#include "Definition.h"
using namespace std;


int main() {
    string theWord;
    getline(cin, theWord);
    Tnode* root = new Tnode;
    root= regist_word(* &root, theWord); //����1
    void print_tree(Tnode * root);//����2
    void print_tree_byorder(Tnode * root);//����3

    return 0;
}