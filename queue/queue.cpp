#include "queue.h"
using namespace std;

Queue::Queue()
{
    f=r=-1;
}

Queue::~Queue(){}

bool Queue::isEmpty()
{
    return (r==-1);
}

bool Queue::isFull()
{
    return (r>=MAX_QUEUE_SIZE-1);
}

void Queue::enqueue(int val)
{
    if (!isFull())
    {
        r++;
        this->queue_array[r]=val;
    }
    else
    {
        cout<<"Queue overflow."<<endl;
    }
}

int Queue::dequeue()
{
    if (!isEmpty())
    {
        return this->queue_array[++f];
    }
    else
    {
        cout<<"Queue underflow."<<endl;
    }
}

int Queue::get_front()
{
    if (!isEmpty())
    {
        return this->queue_array[++f];
    }
    else
    {
        cout<<"Queue underflow."<<endl;
    }
}

int Queue::get_rear()
{
    if (!isEmpty())
    {
        return this->queue_array[r];
    }
    else
    {
        cout<<"Queue underflow."<<endl;
    }
}
