#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;

    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(arr[mid]==target)
        {
            // return index of the found element
            return mid;
        }
        
        else if(arr[mid]<target)
        {
            //right me jao
            start =mid+1;
        }

        else if(arr[mid]>target)
        {
            //left me jao
            end = mid-1;
        }

        // mid update
        mid = start + (end-start)/2;
    }
    //agar aap ayah tak pahuch gye 
    //to iska mtlb element nhi mila
    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int target=90;

    int ansIndex = binarySearch(arr,size,target);

    if(ansIndex==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found";
    }

}