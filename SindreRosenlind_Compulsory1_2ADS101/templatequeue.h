#pragma once
#include <iostream>
using namespace std;

template <class X>
class templatequeue {
public:
	templatequeue() {
		arr = new X[capacityVar];
		t_front = t_back = -1;
		sizeVar = 0;
	}
	int capasity();
	void push(X x);
	bool full();
	void pop();
	int size();
	bool empty();
	X front();
	X back();
private:
	int t_front;
	int t_back;
	X* arr;
	int sizeVar;
	int capacityVar = 4;
};



template <class X>
int templatequeue<X>::capasity() {
	return capacityVar;
}

template <class X>
void templatequeue<X>::push(X x) {
	if (full()) {
		capacityVar = capacityVar * 2;
		X* temp = new X[capacityVar];
		for (int i = 0; i < sizeVar; i++) {
			temp[i] = arr[i];
		}
		delete[] arr;
		arr = temp;
	}
	if (empty()) {
		t_front = t_back = 0;
		arr[t_back] = x;
		sizeVar++;
		return;
	}
	t_back = (t_back + 1) % capacityVar;
	arr[t_back] = x;
	sizeVar++;
	return;
}

template <class X>
void templatequeue<X>::pop() {
	if (empty()) {
		cout << "Queue underflow" << endl;
		abort();
	}
	if (t_front == t_back) {
		t_front = t_back = -1;
		sizeVar--;
		return;
	}
	t_front = (t_front + 1) % capacityVar;
	sizeVar--;
	return;
}

template <class X>
bool templatequeue<X>::full() {
	if (sizeVar == capacityVar) {
		return true;
	}
	else {
		return false;
	}
}

template <class X>
X templatequeue<X>::front() {
	if (empty()) {
		cout << "Queue underflow" << endl;
		abort();
	}
	return arr[t_front];
}

template <class X>
X templatequeue<X>::back() {
	if (empty()) {
		cout << "Queue underflow" << endl;
		abort();
	}
	return arr[t_back];
}


template <class X>
int templatequeue<X>::size() {
	return sizeVar;
}

template <class X>
bool templatequeue<X>::empty() {
	if (t_front == -1 && t_back == -1) {
		return true;
	}
	else {
		return false;
	}
}
