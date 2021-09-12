#pragma once
#include <iostream>
#include "charnode.h"

template <class T> 
class templatestack {
public:
	templatestack();
	~templatestack();
	void push(const char& ch);
	void pop();
	char top() const;
	int size();
	bool empty();
private:
	CharNode* s_front;
	CharNode* s_back;
};

template <class T>
templatestack<T>::templatestack() {
	s_front = s_back = nullptr;
}

template <class T>
templatestack<T>::~templatestack() {

}

template <class T>
void templatestack<T>::push(const char& ch) {
	CharNode* ny = new CharNode(ch, nullptr);
	if (s_back != nullptr) {
		s_back->setNext(ny);
	}
	s_back = ny;
	if (s_front == nullptr) {
		s_front = s_back;
	}
}

template <class T>
void templatestack<T>::pop() {
	if (s_back != nullptr) {
		CharNode* out = s_back;
		s_back = s_back->getNext();
		delete out;
	}
	if (s_front == nullptr) {
		std::cout << "stack is empty" << std::endl;
	}
}

template <class T>
char templatestack<T>::top() const {
	std::cout << s_front->getData();
	return s_front->getData();
}

template <class T>
int templatestack<T>::size() {
	std::cout<< s_front->getAmount();
	return s_front->getAmount();
}

template <class T>
bool templatestack<T>::empty() {
	if (s_front == nullptr) {
		return true;
	}
	else {
		return false;
	}
}