//Binary search in 2D array(leetcode 74)

#include<iostream>
using namespace std;

bool binarySearch(int arr[][3],int row,int col,int target)
{
    int s=0;
    int e=row*col;

    long long int mid=s+(e-s)/2;

    while(s<=e)
    {
        int rowIndex=mid/col;
        int colIndex=mid%col;
        int currentNum=arr[rowIndex][colIndex];

        if(currentNum==target)
        {
            //agr 
            return true;
        }
        else if(currentNum<target)
        {
            //right me jao
            s=mid+1;
        }
        else
        {
            //left me jao
            e=mid-1;
        }
        mid=s+(e-s);
    }
    return false;

}

int main()
{
    int arr[3][3] = 
    {
       {10,20,30},
       {40,50,60},
       {70,80,90}
    };
    int row=3;
    int col=3;
    int target=60;

    bool ans = binarySearch(arr,row,col,target);

    if(ans==true)
    {
        cout<<"The element is found";
    }
    else
    {
        cout<<"The element is not found";
    }
}