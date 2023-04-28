#include <iostream>
using namespace std;
class Char_queue {

public:

	Char_queue();

	~Char_queue() { delete[] queue; }

	bool empty() const { return head == tail; }

	char dequeue();                 //出队 

	void enqueue(char);             //入队 

	bool full() const { return head == (tail + 1) % capacity; }

private:

	static unsigned const default_capacity = 32;

	char* queue;                   //循环队列

	unsigned head, tail;

	unsigned const capacity;

};
Char_queue::Char_queue()
	:capacity(default_capacity)
{
	head = 0;
	tail = 0;
	queue =nullptr;
}
char Char_queue::dequeue() {
	if (head == tail) {
		cout << "队列为空" << endl;
		return false;
	}
	else {
		cout << "出队元素:" << queue[head] << endl;
		char ch = queue[head];
		head=(head+1)%capacity;
		return ch;
	}
}void Char_queue::enqueue(char ch) {
	if (((tail + 1) % capacity) == head) {
		cout << "队列已满" << endl;
	}
	else {
		queue[head] = ch;
		head = (head + 1) % capacity;
	}
}