#include "LinkedList_stack.cpp"

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.traverse();
    cout<<"Top value:"<<endl;
    cout<<s.peek()<<endl;
    cout<<"Pop value:"<<endl;
    cout<<s.pop()<<endl;
    cout<<"Pop value:"<<endl;
    cout<<s.pop()<<endl;
    cout<<"Pop value:"<<endl;
    cout<<s.pop()<<endl;
    cout<<"Pop value:"<<endl;
    cout<<s.pop()<<endl;
    cout<<"Pop value:"<<endl;
    cout<<s.pop()<<endl;

    return 0;
}
