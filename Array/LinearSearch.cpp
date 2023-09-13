// Make a program for linear search using function

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found
            return true;
        }
    }
    // not found
    return false;
}

int main()
{
    int arr[6] = {10, 20, 50, 40, 30, 70};
    int size = 6;
    int target = 70;
    bool ans = linearSearch(arr, size, target);

    if (ans == true)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Target is not found";
    }

    return 0;
}