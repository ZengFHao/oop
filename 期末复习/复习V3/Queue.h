#pragma once
#include<iostream>
#include<deque>
using namespace std;
class Queue
{
	deque<int> p;
	int temp;
	bool flag = 0;
public:
	Queue();
	Queue(const Queue& q);
	Queue& operator--();
	Queue operator+(int);

	friend ostream& operator<<(ostream& os, Queue& q);
	friend Queue& operator+(int t, Queue& q);
	//Queue& operator--(Queue q);

};

ostream& operator<<(ostream& os, Queue& q);
Queue& operator+(int t, Queue &q);


