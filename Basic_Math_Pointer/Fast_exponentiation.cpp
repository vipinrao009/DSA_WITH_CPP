#include<iostream>
using namespace std;

int fastExponent(int a, int b)
{
    int ans=1;

    while(b>0)
    {
        if(b&1)
        {
            //for odd
            ans = ans*a;
        }
        a = a*a;
        b>>=1; // b = b/2;
    }
    return ans;
}

int main()
{
    int ans=fastExponent(5,4);
    cout<<"A^B :"<<ans;
}