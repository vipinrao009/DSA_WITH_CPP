//Taking input

#include<iostream>
using namespace std;

void printArray(int arr[][2],int row,int col)
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
    int arr[2][2];
    int row=2;
    int col=2;
    cout<<"Enter the value !!!";
    //Taking input
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    //Print array this
    printArray(arr,row,col);
   
}