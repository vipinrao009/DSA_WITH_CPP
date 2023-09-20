#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    // Step 01: count 0 and 1
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // Step 02: fill 0's

    int i = 0;
    while (zeroCount--)
    {
        arr[i] = 0;
        i++;
    }

    // Step 03: fill 1's;
    while (oneCount--)
    {
        arr[i] = 1;
        i++;
    }

    // HArd step
    // Step B: place all zeroes first
    //  int i;
    //  for(i =0; i<zeroCount; i++) {
    //   arr[i] = 0;
    //  }
    //  //Step B: place all ones first
    //  for(int j = i; j<n ;j++) {
    //   arr[j] = 1;
    //  }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 0, 1};
    int size = 6;

    printArray(arr, size);
    printArr(arr, size);
}