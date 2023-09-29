// Custom Operator => we can sort without using bubble , insertion , selection sort 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &arr)
{
    for (auto v : arr)
    {
        cout << v << " ";
    }
}

bool myComp(int &a , int &b)
{
    //return a<b;  // increasing order
    return a>b; // decreasing order
}

int main()
{
    vector<int> arr = {55, 33, 44, 22, 11};
    sort(arr.begin(), arr.end(),myComp);
    print(arr);

    return 0;
}