// Extreme print in an array

// Input -> 10 20 30 40 50 60
// Output -> 10 60 20 50 30 40

#include<iostream>
using namespace std;

void extremeArray(int arr[],int size)
{
    int left = 0;
    int right = size - 1;

    while(left<=right)
    {
        if(arr[left]==arr[right])
        {
            cout<<arr[left];
        }
        else
        {
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
            left++;
            right--;
        }
    }
   
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=6;

    //call the function
    extremeArray(arr,size);
    
    return 0;
}