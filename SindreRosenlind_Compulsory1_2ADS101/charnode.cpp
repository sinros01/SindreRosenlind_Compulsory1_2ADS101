#include <string>
#include <sstream>
#include <iostream>
#include "charnode.h"


int CharNode::s_amount;

CharNode::CharNode(char character, CharNode* next)
	: m_character(character), m_next(next) {
	s_amount++;
}

std::string CharNode::toString() const {
	std::ostringstream oss;
	oss << m_character;
	return oss.str();
}

CharNode* CharNode::getNext() const {
	return m_next;
}

void CharNode::writeBackwards() const {
	if (m_next) {
		m_next->writeBackwards();
		std::cout << m_character;
	}
}

int CharNode::getAmount() {
	return s_amount;
}

CharNode::~CharNode() {
	s_amount--;
}

char CharNode::getData() const {
	return m_character;
}

void CharNode::setNext(CharNode* next) {
	m_next = next;
}