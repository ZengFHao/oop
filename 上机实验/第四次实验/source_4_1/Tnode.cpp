#include "Tnode.h"

Tnode::Tnode() {
    word = "";
    count = 0;
    Tnode* left = NULL;
    Tnode* right = NULL;
}
Tnode::~Tnode() {

}

void Tnode::setword(string theWord) {
    this->word = theWord;
}
string Tnode::getword() {
    return word;
}
void Tnode::setCount() {
    count++;
}
Tnode* Tnode::Left() {
    return  left;
}
void Tnode::setLeft(Tnode* T) {
    left = T;
}
Tnode* Tnode::Right() {
    return  right;
}
void Tnode::setRight(Tnode* T) {
    right = T;
}