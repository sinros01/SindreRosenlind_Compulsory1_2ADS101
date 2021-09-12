#pragma once
#include "charnode.h"

class stack {
public:
	stack();
	void push(char character);
	void pop();
	int size() const;
	char top() const;
	bool empty() const;
private:
	CharNode* m_top;
};
