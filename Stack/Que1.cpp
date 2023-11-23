/*
   note: Stack is recursion or recusion is stack , that expalained below

   Que: Reverse string using stack 
*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str = "vipin";

    stack<char> st;

    for(int i=0; i<str.length(); i++)
    {
        //Step 01: push each charactor of string into stack
        char ch = str[i];
        st.push(ch);
    }

    // step 02: pop element from stack and print 
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}