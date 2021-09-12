#pragma once

template <class T>
class Node {
public:
	Node(T character, Node* next = nullptr);
	Node<T>* getNext() const;
	void setNext(Node<T>* next);
	static int getAmount();
	T getData() const;
	~Node();
private:
	T m_character;
	static int s_amount;
	Node<T>* m_next;
};

template <class T>
int Node<T>::s_amount;

template <class T>
Node<T>::Node(T character, Node<T>* next)
	: m_character(character), m_next(next) {
	s_amount++;
}

template <class T>
Node<T>* Node<T>::getNext() const {
	return m_next;
}

template <class T>
void Node<T>::setNext(Node<T>* next) {
	m_next = next;
}

template <class T>
int Node<T>::getAmount() {
	return s_amount;
}

template <class T>
Node<T>::~Node() {
	s_amount--;
}

template <class T>
T Node<T>::getData() const {
	return m_character;
}