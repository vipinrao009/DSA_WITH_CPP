// Find the max number in 2D array

#include<iostream>
#include<limits.h>
using namespace std;

int FindMax(int arr[][3],int row,int col)
{
    int maxAns=INT_MIN;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]>maxAns)
            {
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}

int main()
{
    int arr[3][3]={
       {10,20,30},
       {40,50,60},
       {70,80,90}
    };

    int row=3;
    int col=3;
    int MaxNumber=FindMax(arr,row,col);

    cout<<"The Maximum number is: "<<MaxNumber;
}