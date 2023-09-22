//binary search on nearly sorted array

#include<iostream>
using namespace std;

int NearlySortedArray(int arr[],int size, int target)
{
    int s=0;
    int e=size-1;

    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(mid-1>=0 && arr[mid-1]<target)
        {
            //right me jao
            s=mid+2;
        }
        else if(arr[mid]==target)
        {
            
        }
    }
}