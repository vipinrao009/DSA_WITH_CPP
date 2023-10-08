//Move all negative value in left

#include<iostream>
using namespace std;

void moveNegLeft(int *arr, int n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        //jab start pointer <0 par khada ho
        if(arr[start]<0)
        {
            start++;
        }

        //jab end ka value > 0 to 
        else if(arr[end]>0)
        {
            end--;
        }

        // jab dono condition false ho tab
        else
        {
            swap(arr[start],arr[end]);
        }

    }
}

int main()
{
    int arr[]={-2,1,2,3,-5,6};

    int n = sizeof(arr)/sizeof(int);

    moveNegLeft(arr,n);

    //print the value after sorting 
    cout<<"The value after sorting :";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}