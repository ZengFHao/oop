#pragma once
#include <iostream>
#include <String>
#include "Tree.h"
using namespace std;
#ifndef Definition
#define Definition

Tnode* regist_word(Tnode*& root, const string& theWord) { // ²Ù×÷1
	root->left = NULL;
	root->right = NULL;
	Tnode* p = root;
	int i = 0;
	while (i<theWord.length()){
			if (root->word > theWord) {
				Tnode* T = new Tnode;
				T->word = theWord;
				T->left = NULL;
				T->right = NULL;
				root->count++;
				p->left = T;
				p = T;
				i++;
			}
			else {
				Tnode* T = new Tnode;
				T->word = theWord;
				T->left = NULL;
				T->right = NULL;
				root->count++;
				p->right = T;
				p = T;
				i++;
			}
		}
	return root;
}
void print_tree(Tnode* root) {// ²Ù×÷2
	if (!root) return;
	cout << root->word << endl;
	print_tree(root->left);
	print_tree(root->right);
} 
void print_tree_byorder(Tnode* root) { // ²Ù×÷3
	if (!root) return;
	print_tree_byorder(root->left);
	cout << root->word << endl;
	print_tree_byorder(root->right);
}
#endif // !Definition
