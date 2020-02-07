#include "LinkedList.cpp"
int main()
{
    LinkedList ll;
    ll.addToHead(3);
    ll.addToHead(2);
    ll.addToTail(4);
    ll.addToHead(1);
    ll.addToTail(5);
    ll.addToHead(8);
    Node *ptr=ll.retreive(2);
    ll.add(10,ptr);
    ll.traverse();
    cout<<"Is 2 present in LinkedList?: "<<ll.search(2)<<endl;
    cout<<"Is 5 present in LinkedList?: "<<ll.search(5)<<endl;
    cout<<"Is 7 present in LinkedList?: "<<ll.search(7)<<endl;
    cout<<"Is 10 present in LinkedList?: "<<ll.search(10)<<endl;
    return 0;
}
