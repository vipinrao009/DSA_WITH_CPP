#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // create queues
    queue<int> q;

    //push 
    q.push(10);
    q.push(20);
    q.push(30);

    //pop
    q.pop();

    //empty
    if(q.empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    //size
    cout<<"Size is: "<<q.size()<<endl;
    cout<<"Front is: "<<q.front()<<endl;
    cout<<"Rear is: "<<q.back()<<endl;
    return 0;
}