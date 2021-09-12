#include <iostream>
#include "charstack.h"
#include "charnode.h"

charstack::charstack() : s_front(nullptr), s_back(nullptr) {

}

charstack::~charstack() {

}

void charstack::push(const char& ch) {
	CharNode* ny = new CharNode(ch, nullptr);
	if (s_back != nullptr) {
		s_back->setNext(ny);
	}
	s_back = ny;
	if (s_front == nullptr) {
		s_front = s_back;
	}
}

void charstack::pop() {
	if (s_back != nullptr) {
		CharNode* out = s_back;
		s_back = s_back->getNext();
		delete out;
	}
	if (s_front == nullptr) {
		std::cout << "stack is empty" << std::endl;
	}
}

char charstack::top() const {
	return s_front->getData();
}

int charstack::size() {
	return s_front->getAmount();
}

bool charstack::empty() {
	if (s_front == nullptr) {
		return true;
	}
	else {
		return false;
	}
}