#include<string>
#include<iostream>
#include"Tree.h"
#include"Tnode.h"
using namespace std;

class Tnode;
class Tree;
int main() {
	string theWord;
	Tree *root=new Tree;
	cout << "输入元素，以ctrl z结束" << endl;
	while (cin >> theWord) {
		root->regist_word(root, theWord);
	}
	cout << "先序遍历：";
	root->print_tree(root->getRoot());
	cout << endl<<"中序遍历：";
	root->print_tree_byorder(root->getRoot());
	return 0;
}