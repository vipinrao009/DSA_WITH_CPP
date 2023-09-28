//Find the missing element in sorted arrray
#include<iostream>
using namespace std;

int MissingNumber(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        //Rule 01: find the pattern
        int diffrence = arr[mid]-mid;
        
        //Rule 02: when difference = 1 then skip thr left part
        if(diffrence==1)
        {
            //right me jao
            s=mid+1;
        }

        //Rule 03: when the differenece = 2 then store mid in ans and skip the right part
        else if(diffrence==2)
        {
            //store mid in ans
            ans=mid;
            //left me jao
            e=mid-1;
        }
        //update mid
        mid = s + (e-s)/2;
    }
    //agr yaha tak aaye that means u did not get element
    // then return the ans
    return ans+1;
}

int main()
{
    int arr[]={1,2,3,4,6,7,8,9};
    int size=8;

    // calling function
    int ans=MissingNumber(arr,size);

    cout<<"The missing number is: "<<ans;
}