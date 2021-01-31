#include <iostream>
#include <string>
#define MAX 100
using namespace std;

class Stack{
    private:
        string elements[MAX];
        int top;
    public:
        Stack();
        ~Stack();
        void push(string element);
        string pop();
        string peek();
        bool isEmpty();
        bool isFull();
};
