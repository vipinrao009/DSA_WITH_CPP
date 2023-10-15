#include <iostream>
using namespace std;

int fibb(int num)
{
    // Base Case
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }

    // Recursive relation
    int fibbAns = fibb(num - 1) + fibb(num - 2);
    return fibbAns;
}

int main()
{
    cout<<"Fibbonacci : "<<fibb(4);
    return 0;
}
