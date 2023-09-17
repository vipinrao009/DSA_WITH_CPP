//Tranpose the matrix

#include<iostream>
#include<limits.h>
using namespace std;

void TransposeMatrix(int arr[][4],int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=i; i<col; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void printArray(int arr[][4],int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
    
    cout<<"Before Transpose: "<<endl;
    printArray(arr,row,col);

    cout<<"After Transpose: "<<endl;
    TransposeMatrix(arr,row,col);
    printArray(arr,row,col);

}