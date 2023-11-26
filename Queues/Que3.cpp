/*

*/

#include <iostream>
#include <queue>
using namespace std;

void inserleavingQueue(queue<int> &first)
{
    queue<int> second;
    int size = first.size();
    
    //Push first half of first queue in second queue
    for (int i = 0; i < size / 2; i++)
    {
        int element = first.front();
        first.pop();
        second.push(element);
    }
    
    //Merge both the halves into the original queue - named as first
    for (int i = 0; i < size / 2; i++)
    {
        int element = second.front();
        second.pop();
        first.push(element);

        int element1 = first.front();
        first.pop();
        first.push(element1);
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    inserleavingQueue(q);

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        cout << element << " ";
    }
    return 0;
}