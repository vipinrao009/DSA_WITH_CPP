#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int postion , int &ans)
{
    //base case
    if(postion==1)
    {
        ans = st.top();
        return;
    }

    // 1 case hmko smbhalna hai
    postion--;
    int temp = st.top();
    st.pop();

    // recursion sambhlaeaga
    solve(st,postion,ans);

    // backtracking
    st.push(temp);
}

int getmiddle(stack<int> &st)
{
    int size = st.size();
    if (st.empty())
    {
        return -1;
    }
    else
    {
        // Stack is not empty
        // odd
        int position = 0;
        if (size & 1)
        {
            position = size / 2 + 1;
        }
        else
        {
            // even
            position = size / 2;
        }

        int ans = 0;
        solve(st, position,ans);
        return ans;
        
    }
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(77);

    int mid = getmiddle(st);
    cout<<"Middle element : "<<mid;
}