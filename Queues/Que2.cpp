/*
Reverse the element by K steps
*/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &q, int K)
{
    stack<int> s;
    int n = s.size();

    // queue ke K element tak queue se stack me daalo
    for (int i = 0; i < K; i++)
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // stack ke sabhi element queue me push kare
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }

    for(int i=0; i<n-K; i++)
    {
        int element  = q.front();
        q.pop();

        q.push(element);
    }
}
int main()
{
    int K=3;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    
    reverse(q,K);

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        cout << element << " ";
    }

    return 0;
}