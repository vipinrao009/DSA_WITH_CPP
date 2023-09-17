// Print sum of diogonal of a matrix

#include <iostream>
using namespace std;

int DiogonalSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += arr[i][i];
            }
        }
    }
    return sum;
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

    int ans = DiogonalSum(arr, row, col);
    cout << "Diogonal Sum: " << ans;
}