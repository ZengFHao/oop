#include<iostream>
using namespace std;

class Char_queue {

public:

    Char_queue(unsigned capacity = 0) : tail(&head_node)

    {
        head_node.next = nullptr;
    }

    ~Char_queue();

    bool empty() const { return tail == &head_node; }

    char dequeue();//���� 

    void enqueue(char); //��� 

    bool full() const { return false; }

private:

    struct Node {

        Node* next;

        char data;

    };

    Node head_node;   //ͷ��㣬��ͷ�������� 

    Node* tail;        //βָ�룬��β 

};
Char_queue::~Char_queue() {
    head_node.next = nullptr;
}

char Char_queue::dequeue() {
    if (empty()) {
        cout << "����Ϊ��" << endl;
        return false;
    }
    else {
        cout << "����Ԫ�أ�" << head_node.next->data << endl;
        Node* p = head_node.next;
        head_node.next = head_node.next->next;
        char ch = p->data;
        free(p);
        return ch;
    }
}

void Char_queue::enqueue(char ch) {
    if (!full()) {
        cout << "��������" << endl;
    }
    else {
        cout << "���Ԫ��:" << ch << endl;
        Node* p = nullptr;
        p->data = ch;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }

}