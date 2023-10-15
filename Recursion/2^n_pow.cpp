#include<iostream>
using namespace std;

int pow(int num)
{
    //Base Case
    if(num==0)
    {
        return 1;
    }

    int ans = 2 * pow(num-1);
    return ans;
}

int main()
{
    cout<<pow(4);
}