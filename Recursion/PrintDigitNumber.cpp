#include<iostream>
using namespace std;

void PrintNumber(int num)
{
    // Base case 
    if(num == 0)
    {
        return;
    }
    //Processing
    int digit = num%10;

    //Update the num 
    num = num/10;

    // Recursive call
    PrintNumber(num);

    cout<<digit<<" ";
}

int main()
{
    int num = 4215;
    PrintNumber(num);
    return 0;
}