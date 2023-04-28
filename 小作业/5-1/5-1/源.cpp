#include <iostream>
#include <string>
using namespace std;

struct Tnode {
    string word;
    int count;
    Tnode* left;
    Tnode* right;
};


Tnode *addTreeNode(string s) {  //用于第一问用于加入结点
    Tnode* T = new Tnode;
    Tnode* x = new Tnode;
    x->word = s;
    T->count = 1;
    T->left = NULL;
    T->right = NULL;
    T->word = "";
    Tnode* p = new Tnode;
    p = T;
    while (x) {
        if (x->word < p->word) {
            Tnode* q = new Tnode;
            q->word = s;
            q->count++;
            q->left = NULL;
            q->right = NULL;
            p->left = q;
        }
        else {
            Tnode* q = new Tnode;
            q->word = s;
            q->count++;
            q->left = NULL;
            q->right = NULL;
            p->right = q;
        }
    }
    return T;
}
void BT_PreOrder(Tnode *T) {   //用于第二问输出二叉树
    if (!T)  return;
    cout << T->word<<endl;
    BT_PreOrder(T->left);
    BT_PreOrder(T->right);
}
// 中序遍历
void BT_PreOrder(Tnode* T) {   //用于第三问输出单词序列
    if (!T)  return;
    BT_PreOrder(T->left);
    cout << T->word << endl;
    BT_PreOrder(T->right);
}