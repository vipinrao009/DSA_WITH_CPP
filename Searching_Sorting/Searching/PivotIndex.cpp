//Find pivot index

#include<iostream>
using namespace std;

int findIndex(int arr[],int size)
{
    int s=0;
    int e=size-1;

    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(s==e)
        {
            return s;
        }

        //Handled separately condition
        else if(mid-1>=0 && arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
        else if(mid+1<e && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        //B line par h and answer A line par exist karata h
        else if(arr[s]<arr[mid])
        {
           s=mid+1 ;
        }
        //A line par h and answer B line par exists karata h
        else
        {
            e=mid-1;
        }
        //update the mid
        mid = s+(e-s)/2;
    }
}

int main()
{
    int arr[]={12,14,16,2,4,6,8,10};
    int size=8;

    int pivotAns=findIndex(arr,size);
    cout<<"Maximum element at index : "<<pivotAns;
}