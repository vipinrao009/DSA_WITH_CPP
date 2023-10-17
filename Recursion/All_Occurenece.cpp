#include<iostream>
using namespace std;

void PrintAllOccurence(int arr[],int size, int index, int target)
{
    // Base Case
    if(index>=size)
    {
        return;
    }

    //Processing
    if(arr[index]==target)
    {
        cout<<index<<" ";
    }

    //Recurrence relation
    PrintAllOccurence(arr,size,index+1,target);
}

int main()
{
    int arr[]={10,20,10,40,10};
    int size =5;
    int index =0;
    int target=10;
    PrintAllOccurence(arr,size,index,target);
    return 0;
}