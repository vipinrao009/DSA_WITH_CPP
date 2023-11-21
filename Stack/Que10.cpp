//find previous smaller number
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>preSmallerNumber(int *arr,int size,vector<int>&ans)
{
    stack<int>st;
    st.push(-1);

    for(int i=0; i<size; i++)
    {
        int curr = arr[i];

        while (st.top()>curr)
        {
           st.pop();
        }

        ans[i] = st.top();

        st.push(curr); 

    }
    return ans;
}
int main()
{
    int arr[] = {8,4,6,2,3};
    int size = 5;
    
    vector<int>ans(size);

    ans = preSmallerNumber(arr,size,ans);
    for(auto i :ans)
    {
        cout<<i<<" ";
    }

    return 0;
}