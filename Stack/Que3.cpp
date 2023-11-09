#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st,int &element)
{
    //Base case 
    if(st.empty())
    {
       st.push(element);
       return;
    }

    // ek case mai sambhalunga 
    int temp = st.top();
    st.pop();

    // recursion dekhega
    insertAtBottom(st,element);

    // Backtracking
    st.push(temp);

}
int main()
{
    stack<int> st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);

    int element = 400;

    insertAtBottom(st,element);

    while (!st.empty())
    {
       cout<<st.top()<<" ";
       st.pop();
    }
    

    return 0;
}