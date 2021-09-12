#pragma once
#include "node.h"

template <class T>
class queue {
private:
	Node<T>* m_front;
	Node<T>* m_back;
public:
	queue();
	void push(T data);
	T front() const;
	void pop();
	int size();
};

template <class T>
queue<T>::queue() {
	m_front = m_back = nullptr;
}

template <class T>
void queue<T>::push(T data) {
	Node<T>* ny = new Node<T>(data);
	if (m_back) {
		m_back->setNext(ny);
	}
	m_back = ny;
	if (m_front == nullptr) {
		m_front = m_back;
	}
}

template <class T>
void queue<T>::pop() {
	if (m_front != nullptr) {
		Node<T>* out = m_front;
		m_front = m_front->getNext();
		delete out;
	}
	if (m_front == nullptr) {
		m_back = nullptr;
	}
}

template <class T>
T queue<T>::front() const {
	return m_front->getData();
}

template <class T>
int queue<T>::size() {
	return m_front->getAmount();
}
