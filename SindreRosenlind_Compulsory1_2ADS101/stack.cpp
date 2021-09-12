#include "stack.h"

stack::stack() : m_top{ nullptr }{

}

void stack::push(char character) {

}

void stack::pop() {

}

int stack::size() const {

}

char stack::top() const {
		return m_top->getData();
}

bool stack::empty() const {
	return (m_top == nullptr);
}



