//find the total number of occurrence in sorted array
#include<iostream>
using namespace std;

int LastOccurrence(int arr[],int size, int target)
{
   int s=0;
   int e=size-1;
   int ans = 0;

   while(s<=e)
   {
    int mid = s+(e-s)/2;

    if(arr[mid]==target)
    {
        //store ans
        ans = mid;
        // right me jao
        s = mid+1;
    }
    else if(arr[mid]<target)
    {
        //right me jao
        s=mid+1;
    }
    else if(arr[mid]>target)
    {
        //left me jao
        e = mid-1;
    }
    
   }
   //agar aap yha tak aa gye to iska mtlb element nhi mila
   // to return kar do ans ko
   return ans;
}

int FirstOccurence(int arr[],int size, int target)
{
    int s=0;
    int e=size-1;
    int ans=0;

    while(s<=e)
    {
        int mid =s+(e-s)/2;
        if(arr[mid]==target)
        {
            //store ans
            ans=mid;
            //left me chale jao
            e=mid-1;
        }
        else if(arr[mid]<target)
        {
            //right me jao
            s=mid+1;
        }
        else if (arr[mid]>target)
        {
            //left me jao
            e =mid-1;
        }
        
    }
    //agr yaha tak aaye that means u did not get element
    // then return the ans
    return ans;
}

int totalOccurrence(int arr[],int size,int target)
{
    int FirstIndex = FirstOccurence(arr,size,target);
    int LastIndex = LastOccurrence(arr,size,target);
    int TotalOccurrence=(LastIndex - FirstIndex +1);
    return TotalOccurrence;
}
int main()
{
    int arr[]={10,20,30,30,30,40,50};
    int size =7;
    int target = 30;

    // call the function
    int ansIndex = totalOccurrence(arr,size,target);
    cout<<"Total number of occurrence: "<<ansIndex;
}