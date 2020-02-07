#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#define MAX_QUEUE_SIZE 100

class Queue
{
private:
    int queue_array[MAX_QUEUE_SIZE];
    int f,r;
public:
    Queue();
    ~Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(int);
    int dequeue();
    int get_front();
    int get_rear();
};


#endif // QUEUE_H
