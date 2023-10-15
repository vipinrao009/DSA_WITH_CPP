#include<iostream>
using namespace std;

int SumPrint(int num)
{
    //Base case
    if(num==1)
    {
        return 1;
    }

    //Recurence Relation
    int Ans = num + SumPrint(num-1);
    return Ans;
}

int main()
{
    cout<<"Sum is: "<<SumPrint(5);
}