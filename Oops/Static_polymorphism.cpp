#include<iostream>
using namespace std;

int add(int a, int b)
{
    return (a+b);
}

double add(double a, double b)
{
    return (a+b);
}

int add(int a ,int b ,int c)
{
    return (a+b+c);
}

int main()
{
    cout<<add(5,8)<<endl;
    cout<<add(4.5,5.9)<<endl;
    cout<<add(3,4,5);
    return 0;
}