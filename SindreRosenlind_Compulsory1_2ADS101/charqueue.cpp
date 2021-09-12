#include "charqueue.h"
#include "charnode.h"

charqueue::charqueue() : m_front(nullptr), m_back(nullptr) {

}

charqueue::~charqueue() {

}

void charqueue::push(const char& ch) {
	CharNode* ny = new CharNode(ch, nullptr);
	if(m_back != nullptr){
		m_back->setNext(ny);
	}
	m_back = ny;
	if (m_front == nullptr) {
		m_front = m_back;
	}
}

void charqueue::pop() {
	if (m_front != nullptr) {
		CharNode* out = m_front;
		m_front = m_front->getNext();
		delete out;
	}
	if (m_front == nullptr) {
		m_back = nullptr;
	}
}

char charqueue::front() {
	return m_front->getData();
}

bool charqueue::empty() {
	if (m_front == nullptr) {
		return true;
	}
	else {
		return false;
	}
}

int charqueue::size() {
	return m_front->getAmount();
}