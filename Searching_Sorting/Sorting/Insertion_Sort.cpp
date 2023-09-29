//Insertion Sort

#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int>&arr)
{
    int N = arr.size();
    for(int i=1; i<N; i++)
    {
        //key value = key value ke pahale ke sabhi value ko compare karate hai key value si hi  
        //taki key value ko ham uske right position par rakh paaye
        int key=arr[i];
        int j= i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        // Insert key at right index/Position 
        arr[j+1]=key;
    }
}

int main()
{
    vector<int> arr ={55,44,33,22,11};
    InsertionSort(arr);
    //For each loop
    for(auto value:arr)
    {
        cout<<value<<" ";
    }
    return 0;
}