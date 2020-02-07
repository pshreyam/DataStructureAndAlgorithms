#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H
#include <iostream>
class Node
{
private:
    int info;
    Node* next;
    friend class Queue;
};

class Queue
{
private:
    Node* f;
    Node* r;
public:
    Queue();
    ~Queue();
    void enqueue(int);
    int dequeue();
    int get_front();
    int get_rear();
    bool isEmpty();
    void traverse();
};

#endif // LINKEDLISTQUEUE_H




















