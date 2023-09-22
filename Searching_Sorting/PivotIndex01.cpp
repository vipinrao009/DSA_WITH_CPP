// Search in rotated and sorted array(leetcode 33)

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(int arr[],int size)
{
    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2;
    int ans =-1;

    while(s<=e)
    {
        //Handled separately condition
        if(mid-1>=0 && arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
        else if(mid+1<e && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        

        // aap A wali line par lie karate ho
        else if(arr[s]>arr[mid])
        {
            //ans left side lie karata h
            e = mid-1;
        }
        //App B vali line par ho 
        else
        {
            s=mid+1;
        }
    }
}
int BinarySearch(int arr[],int s,int e,int target)
{
    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            //left me jao
            e=mid-1;
        }
        else 
        {
            //right me jao
            s=mid+1;
        }

        //update
        mid = s+(e-s)/2;

    }
    //agar aap yaha tak aa gye that means
    //element nahi mila 
    return -1;
}
int Search(int arr[], int size,int target)
{
   int pivotElement=pivotIndex(arr,size);
   int s=0;
   int e=size-1;
   int ans=-1;

   //step 02 => line A
   if(target>=arr[0] && target<arr[pivotElement])
   {
    ans=BinarySearch(arr,0,pivotElement,target);
   }
   else 
   {
    ans=BinarySearch(arr,pivotElement+1,size-1,target);
   }
}

int main()
{
    int arr[]={12,14,16,2,4,6,8,10};
    int size=8;

    int pivotAns=pivotIndex(arr,size);
    cout<<"Maximum element at index : "<<pivotAns;
}