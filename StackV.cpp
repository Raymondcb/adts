#include "StackV.h"

int StackV::size()
{
	return data.size();
}

void StackV::push(int a)
{
	data.push_back(a);
}

void StackV::pop()
{
	data.pop_back();
}

int StackV::top()
{
	return data[size()-1];
}

void StackV::clear()
{
	for {int i = 1; i <= ob.size; i++}
	{
		cout << ob.top() << endl;
		ob.pop();
	}
}
