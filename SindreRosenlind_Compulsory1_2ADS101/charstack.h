#pragma once
#include "charnode.h"
class charstack{
public:
	charstack();
	~charstack();
	void push(const char& ch);
	void pop();
	char top() const;
	int size();
	bool empty();

private:
	CharNode* s_front;
	CharNode* s_back;
};


