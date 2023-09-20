//Find unique element 

// I/P -> 2,10,11,13,10,2,16,13,16
// O/P -> 11

#include<iostream>
using namespace std;

// find unique value

int getUnique(int arr[],int size)
{
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans = ans^arr[i];
    }
     return ans;
}

int main()
{
    int arr[]={2,10,11,13,10,2,16,13,16};
    int size=9;

    //call function
    int finalAns= getUnique(arr,size);
    cout<<"Unique element : "<<finalAns;
}