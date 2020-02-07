#include "queue.cpp"
using namespace std;

int main()
{
    Queue q1;
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);
    q1.enqueue(8);
    q1.enqueue(9);
    q1.enqueue(10);
    cout<<q1.dequeue()<<endl;
    cout<<q1.get_front()<<endl;
    cout<<q1.get_rear()<<endl;
    return 0;
}
