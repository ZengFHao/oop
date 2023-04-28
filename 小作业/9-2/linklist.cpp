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

    char dequeue();//出队 

    void enqueue(char); //入队 

    bool full() const { return false; }

private:

    struct Node {

        Node* next;

        char data;

    };

    Node head_node;   //头结点，队头，单链表 

    Node* tail;        //尾指针，队尾 

};
Char_queue::~Char_queue() {
    head_node.next = nullptr;
}

char Char_queue::dequeue() {
    if (empty()) {
        cout << "队列为空" << endl;
        return false;
    }
    else {
        cout << "出队元素：" << head_node.next->data << endl;
        Node* p = head_node.next;
        head_node.next = head_node.next->next;
        char ch = p->data;
        free(p);
        return ch;
    }
}

void Char_queue::enqueue(char ch) {
    if (!full()) {
        cout << "队列已满" << endl;
    }
    else {
        cout << "入队元素:" << ch << endl;
        Node* p = nullptr;
        p->data = ch;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }

}