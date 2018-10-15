//matt mcmenamin

#include "Lab5MyStack.h"


bool MyStack::isEmpty() const
{
	bool temp = data.empty();
	return temp;
}

void MyStack::push(char & c)
{
	data.push_back(c);
}

char MyStack::pull()
{

	char temp = data.back();
	data.pop_back();
	return temp;
}