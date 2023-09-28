//find the sqrt of X (leetcode 69)

#include<iostream>
using namespace std;

int mySqrt(int x)
{
   int s=0;
   int e=x-1;
   int ans=-1;

   int mid = s+(e-s)/2;
   while(s<=e)
   {
    if(mid*mid==x)
    {
       //kya mid hi to ans nhi na h agr h to mid ko return kar do
       return mid;
    }
    else if(mid*mid<x)
    {
        //right me jao
        s=mid+1;
    }
    else{
        //left me jao 
        ans=mid;
        e=mid-1;
    }

    //update mid
    mid=s+(e-s)/2;
   }
   return ans;
}

int main()
{
    int x=36;
    //call the function
    int FinAns=mySqrt(x);
    cout<<"The Sqrt root of x :"<<FinAns;

}