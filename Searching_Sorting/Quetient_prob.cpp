//divide 2 number using binary search

#include<iostream>
using namespace std;

int Quetient(int divident,int divisor )
{
    int s=0;
    int e=divident;
    int ans=-1;

    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(mid*divisor==divident)
        {
            return mid;
        }
        else if(mid*divisor>divident)
        {
            //left me jao
            e=mid-1;
        }
        else if(mid*divisor<divident)
        {
            //mid ko stor kar lo ans me  and right me chale jao
            ans=mid;
            s=mid+1;
        }
        //high chances yahi par baar baar galati hoti h
        mid=s+(e-s)/2;
    }
    // agar ans nhi mila to
    return ans;
}

int main()
{
    int divident=29;
    int divisor=7;

    int Ans=Quetient(divident,divisor);
    
    cout<<"Quetient : "<<Ans;
}