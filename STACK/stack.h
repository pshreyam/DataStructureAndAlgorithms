#ifndef STACK_H
#define STACK_H

#include <iostream>
#define MAX_STACK_SIZE 3

class Stack
{
private:
    int stack_array[MAX_STACK_SIZE];
    int top;
public:
    Stack();
    ~Stack();
    void push(int);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void traverse();
};

#endif // STACK_H
