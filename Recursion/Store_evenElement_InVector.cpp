#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[],int size,int index,vector<int>&v)
{
    //Base case
    if(index>=size)
    {
        return;
    }
    
    if(arr[index]%2==0)
    {
        v.push_back(arr[index]);
    }

    // Recursive call
    solve(arr,size,index+1,v);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 10;
    int index =0;
    vector<int>v;
    solve(arr,size,index,v);

    cout<<"Even Element in vector :";
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}