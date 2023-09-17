// Print diogonal element of 2D array

#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][i];
    }
}

int main()
{
    int arr[][4] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 8, 7, 6},
            {1, 2, 3, 4}};

    int row = 4;
    int col = 4;

    printArray(arr, row, col);
}