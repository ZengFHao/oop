#include "Queue.h"
Queue::Queue() { 
	temp = 0; 
	flag = 0;
}
Queue::Queue(const Queue& q) {
	p = q.p;
	flag = q.flag;
	temp = q.temp;
}

Queue& Queue::operator--() {
	if (p.size() == 0) {
		cout << "The queue is empty!" << endl;
		return *this;
	}
	else {
		flag = 1;
		temp = p[0];
		p.pop_front();
		return *this;
	}
}


Queue Queue::operator+(int t) {
	if (p.size() >= 3) {
		cout << "The queue is full! " << endl;
		return* this;
	}
	else {
		p.push_back(t);
		return *this;
	}
	
}
ostream& operator<<(ostream& os, Queue& q) {
	if (q.flag == 1) {
		os << q.temp ;
		q.flag = 0;
		return os;
	}
	else {
		for (int i = 0; i < q.p.size(); i++) {
			cout << q.p[i]<<" ";
		}
		cout << endl;
		return os;
	}
	
}
Queue& operator+(int t, Queue &q) {
	if (q.p.size() >= 3) {
		cout << "The queue is full! " << endl;
		return q;
	}
	else {
		q.p.push_back(t);
		return q;
	}
}