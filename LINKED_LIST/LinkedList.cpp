#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    HEAD=NULL;
    TAIL=NULL;
}

LinkedList::~LinkedList(){}

void LinkedList::addToHead(int data)
{
    Node *newNode=new Node();
    newNode->info=data;
    newNode->next=HEAD;
    HEAD=newNode;
    if (TAIL==NULL)
    {
        TAIL=newNode;
    }
}

void LinkedList::addToTail(int data)
{
    Node *newNode=new Node();
    newNode->info=data;
    TAIL->next=newNode;
    TAIL=newNode;
    if (HEAD==NULL)
    {
        HEAD=newNode;
    }
}

void LinkedList::traverse()
{
    Node *temp=HEAD;
    while (temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->next;
    }
}

bool LinkedList::search(int data)
{
    Node *temp=HEAD;
    while (temp!=NULL)
    {
        if (temp->info==data)
        {
            return true;
            break;
        }
        temp=temp->next;
    }
    return false;
}

Node* LinkedList::retreive(int data)
{
    Node* temp=HEAD;
    while(temp!=NULL)
    {
        if (temp->info==data)
        {
            return temp;
            break;
        }
        temp=temp->next;
    }
    cout<<"Data not present"<<endl;
}

void LinkedList::add(int data,Node *predecessor)
{
    Node *newNode=new Node();
    newNode->info=data;
    newNode->next=predecessor->next;
    predecessor->next=newNode;
}
