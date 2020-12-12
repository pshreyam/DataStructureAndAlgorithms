#ifndef LINKEDLISTSTACK_H
#define LINKEDLISTSTACK_H
#include <iostream>

class Node
{
private:
    int info;
    Node* next;
    friend class Stack;
};

class Stack
{
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push(int);
    int pop();
    int peek();
    bool isEmpty();
    void traverse();
};

#endif // LINKEDLISTSTACK_H
