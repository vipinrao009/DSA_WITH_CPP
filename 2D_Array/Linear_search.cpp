//Linear search in 2d array

#include<iostream>
using namespace std;

bool LinearSearch(int arr[][3],int row, int col,int target)
{

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]==target)
            {
                return true; 
                
            }
        }
        return false;
    }
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
    int target=90;

    bool Ans = LinearSearch(arr,row,col,target);
    cout<<Ans;

    // if(Ans==1)
    // {
    //     cout<<"The element is found";
    // }
    // else{
    //     cout<<"The element is not found";
    // }
    return 0;
}