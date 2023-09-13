// linear search

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 40, 30, 70, 50};
    int size = 6;
    int target = 30;

    bool flag = 0; // not fount & 1 -> found

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}