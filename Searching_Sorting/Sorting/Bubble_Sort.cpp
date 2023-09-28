// Binary Search
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&arr)
{
    int size =arr.size();
    for(int i=0; i<size; i++)
    {
        cout<<(arr[i])<<" ";
    }
}

void BinarySearch(vector<int>&arr)
{
    int size = arr.size();
    for (int i = 0; i < size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

int main()
{
    vector<int> arr={5,3,-1,-2,6,8,4,-9};
    
    BinarySearch(arr);
    print(arr);

}