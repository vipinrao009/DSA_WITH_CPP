//find the number occurring odd number of times
#include<iostream>
#include<vector>
using namespace std;

int OddOccurrenec(vector<int> arr)
{
    int n = arr.size();
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid = s+(e-s)/2;
    
    while(s<=e)
    {
        //single element
        if(s==e)
        {
            return s;
        }
        //when mid index is odd
        if(mid & 1)
        {
            //go to the right side and CATCH 01: mid-1 >= 0 because arr[-1] nahi ho saakta
            if(arr[mid]==arr[mid-1])
            {
                s=mid+1;
            }
            //go to left side
            else
            {
                e=mid-1;
            }
        }
        //when mid index is even
        else
        {
            //go to the right side to get ans CATCH 01: mid+1<n because agar n=7 hai to arr[n] nhi ho sakta
            if(mid+1<n && arr[mid]==arr[mid+1])
            {
                //CATCH 04: we don't want to compare twice for one element
                s=mid+2;
            }
            else
            {
                //store mid in and and go left side to get ans (ans/end || peak/ans)
                ans=mid;
                e=mid;
            }
        }
        //update mid
        mid = s+(e-s)/2;
    }
    return ans;
    
}

int main()
{
    vector<int>arr{10,10,2,2,5,5,100,5,5,20,20,11,11,10,10};
    int ans = OddOccurrenec(arr);

    if(ans==-1)
    {
        cout<<"Not Found !!"<<endl;
    }
    else
    {
        cout<<"Final Ans: "<<arr[ans]<<endl;
    }
    return 0;
}