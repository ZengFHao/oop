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
	cout << "����Ԫ�أ���ctrl z����" << endl;
	while (cin >> theWord) {
		root->regist_word(root, theWord);
	}
	cout << "���������";
	root->print_tree(root->getRoot());
	cout << endl<<"���������";
	root->print_tree_byorder(root->getRoot());
	return 0;
}