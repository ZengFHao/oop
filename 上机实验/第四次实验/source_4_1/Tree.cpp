#include"Tree.h"
#include"Tnode.h"
Tree::Tree() {
	root=new Tnode;
}

Tree::~Tree() {
	delete(root);
}


void Tree::regist_word(Tree* root, string& theWord) { // ²Ù×÷1
	Tnode *T=new Tnode;
	T->setword(theWord);
	if (root->root->getword() == "") {
		root->root = T;
		root->root->setCount();
	}
	else {
		Tnode* temp = root->root;
		while (temp) {
			if (temp->getword() > theWord) {
				if (temp->Left() == NULL) {
					temp->setLeft (T);
					root->root->setCount();
					return;
				}
				else
				{
					temp=temp->Left();
				}
			}
			else {
				if (temp->Right() == NULL) {
					temp->setRight(T);
					root->root->setCount();
					return;
				}
				else {
					temp=temp->Right();
				}
			}
		}
		cout << root->root->getword() << endl;

	}



}
void Tree::print_tree(Tnode* root) {// ²Ù×÷2
	if (!root) return;
	cout << root->getword() << " ";
	print_tree(root->Left());
	print_tree(root->Right());
}
void Tree::print_tree_byorder(Tnode* root) { // ²Ù×÷3
	if (!root) return;
	print_tree_byorder(root->Left());
	cout << root->getword() << " ";
	print_tree_byorder(root->Right());
}
Tnode* Tree::getRoot() {
	return root;
}