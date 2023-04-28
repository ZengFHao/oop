#include "Stack.h"

template<class T>
Stack<T>::Stack() {
	buf.clear();
}

template<class T>
void Stack<T>::push(T data) {
	buf.push_back(data);
	cout << "Push successful!!" << endl;
 }

//emplate<class T>
void Stack<T>::pop() {
	if (buf.empty()) {
		cout << "The stack is empty!!!" << endl;
	}
	else {
		buf.pop_back();
		cout << "Pop successful!!" << endl;
	}
}

template<class T>
T Stack<T>::getpop() {
	if (buf.empty()) {
		cout << "The stack is empty!!!" << endl;
		exit(-1);
	}
	else {
		int length = buf.size();
		T temp;
		temp = buf[length - 1];
		return temp;
	}
}

template<class T>
int Stack<T>::getLength() {
	return buf.size();
}

template<class T>
bool Stack<T>::empty() {
	if (buf.size() == 0) return 1;
	else return 0;
}

template<class T>
void Stack<T>::clear() {
	buf.clear();
	cout << "Stack is clear!!" << endl;
}