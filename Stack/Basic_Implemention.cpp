#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    // creation stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Pop
    st.pop();

    //Check empty
    if(st.empty())
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        cout<<"The stack is not empty"<<endl;
    }

    // Top element
    cout<<"Top element: "<<st.top()<<endl;
    
    //Size 
    cout<<"Size of stack: "<<st.size();

    return 0;
}