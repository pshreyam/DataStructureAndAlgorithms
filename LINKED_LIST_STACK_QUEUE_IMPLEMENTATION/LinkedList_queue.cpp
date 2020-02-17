#include "LinkedList_queue.h"
using namespace std;

Queue::Queue()
{
    Node* f,*r;
}

Queue::~Queue(){}

bool Queue::isEmpty()
{
    return (r==NULL);
}

void Queue::enqueue(int data)
{
    Node* newNode=new Node();
    newNode->info=data;
    newNode->next=NULL;
    if (isEmpty())
    {
        r=newNode;
        f=r;
    }
    else
    {
        r->next=newNode;
        r=newNode;
    }
}

int Queue::dequeue()
{
    if (isEmpty())
    {
        cout<<"Queue underflow."<<endl;
        return -1;
    }
    else
    {
        int value=f->info;
        Node *temp=f;
        f=f->next;
        delete temp;
        return value;
    }
}

int Queue::get_front()
{
    if (isEmpty())
    {
        cout<<"Queue underflow."<<endl;
        return -1;
    }
    else
    {
        return f->info;
    }
}

int Queue::get_rear()
{
    if (isEmpty())
    {
        cout<<"Queue underflow."<<endl;
        return -1;
    }
    else
    {
        return r->info;
    }
}

void Queue::traverse()
{
    Node* temp=f;
    while (temp!=NULL)
    {
        cout<<temp->info;
        temp=temp->next;
    }
}
