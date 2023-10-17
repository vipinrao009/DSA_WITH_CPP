#include<iostream>
#include<limits.h>
using namespace std;

int MinNo(int arr[],int size,int index , int &mini)
{ 
    //Base Case
    if(index>=size)
    {
        return 0;
    }

    // Processing
    mini = min(arr[index],mini);

    // Recursive call
    MinNo(arr,size,index+1,mini);
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    int index = 0;
    int mini = INT_MAX;
    int ans =MinNo(arr,size,index,mini);
    cout<<"The minimum number is :"<<mini;


}