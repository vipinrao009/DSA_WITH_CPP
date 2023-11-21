//find the next smaller number in array

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>smallerNextNumber(int*arr,int size,vector<int>&ans)
{
    stack<int> st;
    st.push(-1);

    for(int i=size-1; i>=0; i--)
    {
        int curr =arr[i];
        while(st.top()>=curr)
        {
            st.pop();
        }

        // app ans par kahde ho 
        //stack ka top hi curr elemnt se chota hai isiliye isko ans me store kar lo
        ans[i] = st.top();

        //aur curr element ko stack ke top par push kar do atki baaki element ka bhi comprision ho sake is element ke sath

        st.push(curr);
    }
    return ans;
}


int main()
{
    int arr[5] = {8,4,6,2,3};
    int size = 5;

    vector<int>ans(5);
    
    ans = smallerNextNumber(arr,size,ans);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
    return 0;
}