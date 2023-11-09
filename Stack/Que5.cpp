#include<iostream>
#include<stack>
using namespace std;

void insertedSort(stack<int>&st,int &element)
{
    //Base case
    if(st.empty() || element>st.top())
    {
        st.push(element);
        return;
    }

    //1 case hmko smbhalna h
    int temp = st.top();
    st.pop();

    // recursion smbhalega
    insertedSort(st,element);

    // Backtracking
    st.push(temp);
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element = 25;
    insertedSort(st,element);

    while(!st.empty())
    {
        cout<<st.top()<<" ";;
        st.pop();
    }
    return 0;
}