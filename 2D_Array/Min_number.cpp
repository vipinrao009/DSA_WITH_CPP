// find minimum number in 2D array

#include<iostream>
#include<limits.h>
using namespace std;

int FindMin(int arr[][3],int row,int col)
{
    int minAns=INT_MAX;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]<minAns)
            {
                //update minAns
                minAns=arr[i][j];
            }
        }
    }
    return minAns;
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

    int MinNumber=FindMin(arr,row,col);
    cout<<"Minimum number is: "<<MinNumber;
}