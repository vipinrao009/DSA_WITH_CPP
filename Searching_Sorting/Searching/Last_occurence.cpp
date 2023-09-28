// Find the first last occurence of number in a given array

#include<iostream>
using namespace std;

int lastOccurenece(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int ans =-1;

    int mid = start+(end-start)/2;

    while(start<=end)
    {
       if(arr[mid]==target)
       {
        //store ans
        ans=mid;
        //right me jao
        start=mid+1;
       }
       else if(arr[mid]<target)
       {
        //right me jao
        start=mid+1;
       }
       else if(arr[mid]>target)
       {
        //left me jao
        end=mid-1;
       }
       //yhi par hmesha galti hoti  hai
       mid = start+(end-start)/2;
    }
    //agar aap yaha tak aa gye hai to
    //iska mtlb element nhi mila
    return ans;
}

int main()
{
    int arr[]={10, 20, 30, 30, 30, 30, 40, 50};
    int size=8;
    int target=30;
    int ansIndex = lastOccurenece(arr,size,target);
    
    if(ansIndex==-1)
    {
        cout<<"Element is not found";
    }
    else
    {
        cout<<"The element is found at index: "<<ansIndex;
    }

}