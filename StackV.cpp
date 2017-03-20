#include "StackV.h"
#include <iostream>

int Stack::size()
{
	return data.size();
}

void Stack::push(int a)
{
	data.push_back(a);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	return data[size()-1];
}

void Stack::clear()
{
	for (int i = 1; i <= data.size(); i++)
	{
		cout << top() << endl;
		pop();
	}
}
