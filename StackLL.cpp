#include "StackLL.h"
#include <iostream>

using namespace std;

class Stack::Node 
{
	
	public:
		int data = 0;
		Node* link = nullptr;
		
};

Stack::~Stack()
{
		while(num_elements > 0)
			pop();
}

int Stack::size()
{
	return num_elements;
}

void Stack::push(int val)
{
	
	Node* newPtr = new Node{val};
	
	{
		newPtr->link = frontPtr;
		frontPtr = newPtr;
	}
	
	num_elements++;
}

void Stack::pop()
{
	
	Node* delPtr;
	int del_data;
	
		delPtr = frontPtr;
		frontPtr = frontPtr->link;
		del_data = delPtr->data;
		delete delPtr;
		num_elements--;
}

void Stack::clear()
{
	while(num_elements != 0)
	{
		pop();
	}
}

int Stack::top()
{
	Node*currPtr = frontPtr;
	return currPtr->data;
}






