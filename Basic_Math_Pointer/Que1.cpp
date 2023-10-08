#include<iostream>
using namespace std;

void solve(int arr[],int size)
{
    //imp case
    *arr =*arr+1;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    
    int size =5;
    solve(arr,size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}