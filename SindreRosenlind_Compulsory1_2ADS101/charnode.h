#pragma once
#include <string>
class CharNode
{
public:
	CharNode(char character = '0', CharNode* next = 0);
	std::string toString() const;
	CharNode* getNext() const;
	void writeBackwards() const;
	static int getAmount();
	char getData() const;
	void setNext(CharNode* next);
	~CharNode();
private:
	char m_character;
	static int s_amount;
	CharNode* m_next;
};

