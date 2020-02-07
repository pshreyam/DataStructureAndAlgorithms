#include "stack.h"
using namespace std;

Stack::Stack()
{
    top=-1;
    for (int i=0;i<MAX_STACK_SIZE;i++)
    {
        this->stack_array[i]=-1;
    }
}

Stack::~Stack(){}

bool Stack::isEmpty()
{
   return (top<0);
}

bool Stack::isFull()
{
    return (top>=MAX_STACK_SIZE-1);
}

void Stack::push(int val)
{
    if (!isFull())
    {
        top++;
        this->stack_array[top]=val;
    }
    else
    {
        cout<<"Stack is Full. Stack Overflow."<<endl;
    }
}

int Stack::pop()
{
    if (!isEmpty())
    {
        return this->stack_array[top--];
    }
    else
    {
        cout<<"Stack underflow."<<endl;
        return -1;
    }
}

int Stack::peek()
{
    if (!isEmpty())
    {
        return this->stack_array[top];
    }
    else
    {
        cout<<"Stack underflow."<<endl;
        return -1;
    }
}

void Stack::traverse()
{
    for (int i=0;i<MAX_STACK_SIZE;i++)
    {
        if (this->stack_array[i]==-1)
        {
            break;
        }
        else
        {
            cout<<this->stack_array[i]<<endl;
        }
    }
}
