#include "LinkedList_stack.h"
using namespace std;

Stack::Stack()
{
    top=NULL;
}

Stack::~Stack(){}

bool Stack::isEmpty()
{
    return (top==NULL);
}

void Stack::push(int data)
{
    Node* newNode=new Node();
    newNode->info=data;
    newNode->next=top;
    top=newNode;
}

int Stack::pop()
{
    Node *temp;
    if (isEmpty())
    {
        cout<<"Stack underflow."<<endl;
        return -1;
    }
    else
    {
        int value=top->info;
        temp=top;
        top=top->next;
        delete temp;
        return value;
    }
}

int Stack::peek()
{
    if (isEmpty())
    {
        cout<<"Stack underflow."<<endl;
        return -1;
    }

    else
    {
        return top->info;
    }
}

void Stack::traverse()
{
    //this is for test traversal(top to bottom)
    Node* temp=top;
    while (temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->next;
    }
}
