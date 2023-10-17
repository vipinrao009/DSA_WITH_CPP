//Retrun index in vector with all occurence og target
#include<iostream>
#include<vector>
using namespace std;

void find(int arr[],int size,int index,int target , vector<int>&v)
{
    // Base case
    if(index>=size)
    {
        return;
    }

    // Processing
    if(arr[index]==target)
    {
        v.push_back(index);
    }

    // Recurence relation
    find(arr,size,index+1,target,v);

}

int main()
{
    int arr[] = {10,20,10,30,10};
    int size = 5;
    int index =0;
    int target = 10;
    vector<int>v;

    // call the function
    find(arr, size,index,target,v);
    
    cout<<"All the occurence index :";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}