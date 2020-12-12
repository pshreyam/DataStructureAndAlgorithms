#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node
{
private:
    int info;
    Node *next;
    friend class LinkedList;
};

class LinkedList
{
private:
    Node *HEAD;
    Node *TAIL;
public:
    LinkedList();
    ~LinkedList();
    void addToHead(int);
    void addToTail(int);
    void add(int,Node*);
    void removeFromHead();
    void traverse();
    bool search(int);
    Node* retreive(int);

};

#endif // LINKEDLIST_H
