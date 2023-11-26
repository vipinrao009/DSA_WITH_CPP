/*
Reavers the element of queue
*/

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void ReversElement(queue<int> &q)
{
    stack<int> s;

    // Step 1: one by one queue se element lo and stack me daalo
    while (!q.empty())
    {
        int frontElement = q.front();
        q.pop();
        s.push(frontElement);
    }

    // Step 2: one by one stack se element lo and queue me push karo
    while (!s.empty())
    {
        int topelement = s.top();
        s.pop();
        q.push(topelement);
    }
}

void recursiveMethod(queue<int> &q)
{
    // base case
    while (q.empty())
    {
        return;
    }

    // ek kaam mai karung
    int element = q.front();
    q.pop();

    // ye recursion smbhalege
    recursiveMethod(q);

    // bactracing
    q.push(element);
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

    recursiveMethod(q);

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        cout << element << " ";
    }

    return 0;
}