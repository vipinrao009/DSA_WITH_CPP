#include<iostream>
#include<limits.h>
using namespace std;

int findMinimum(int arr[],int size)
{
    //variable to store minimum value
    int minAns = INT_MAX;
    for(int i =0; i<size; i++)
    {
        if(arr[i]<minAns)
        {
            minAns=arr[i];
        }
    }
    return minAns;
}

int main()
{
    int arr[]={10,8,7,4,2,-3};
    int size =6;
    int minimum =findMinimum(arr,size);

    cout<<"Minimum number: "<<minimum;
    return 0;
}
