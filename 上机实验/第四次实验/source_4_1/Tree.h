#include<string>
#include<iostream>

using namespace std;

class Tnode;
class Tree
{
	Tnode *root;
public:
	Tree();
	~Tree();
	Tnode* getRoot();
	void regist_word(Tree *, string&);
	void print_tree(Tnode*);
	void print_tree_byorder(Tnode*);
};






