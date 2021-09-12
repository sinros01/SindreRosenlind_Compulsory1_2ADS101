#pragma once
#include "charnode.h"
class charqueue
{
public:
	charqueue();
	~charqueue();
	void push(const char& ch);
	void pop();
	char front();
	bool empty();
	int size();
private:
	CharNode* m_front;
	CharNode* m_back;
};

