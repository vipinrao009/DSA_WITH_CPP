/*
   note: Stack is recursion or recusion is stack , that expalained below
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
        //String se nikalkr char me dalo kyuki stac me char ke through hi store ho skta hai hai
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}