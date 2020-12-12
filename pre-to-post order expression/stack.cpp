#include "stack.h"
//Constructor
Stack::Stack(){top = -1;}
//Destructor
Stack::~Stack(){}
//Checking an empty stack
bool Stack::isEmpty()
{
    return top<0;
}
//Checking a full stack
bool Stack::isFull()
{
	return top>=MAX-1;
}
void Stack::push(string element)
{
	if(isFull())
    {
	cout<< "Cannot push..."<<element<<"...(Stack Overflow)";
    }
    else
    {
    	top++;
    	this->elements[top] = element;
    }
}
string Stack::pop()
{
	if(isEmpty())
    {
		cout<< "Cannot pop..."<<endl<< "...(Stack Underflow)";
	}
	else
	{
		return elements[top--];
	}
}
string Stack::peek()
{
	if(isEmpty())
    {
		cout<< "Cannot pop..."<<endl<< "...(Stack Underflow)";
	}
	else
	{
		return elements[top];
	}
}
