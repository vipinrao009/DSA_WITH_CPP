// count 0's and 1's 

#include<iostream>
using namespace std;

void countZeroOne(int arr[],int size)
{
    int countZero = 0;
    int countOne = 0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        {
            countZero ++;
        }
        if(arr[i]==1)
        {
            countOne ++;
        }
    }

    cout<<"Zero Count: "<<countZero<<endl;
    cout<<"One count: "<<countOne;
}

int main()
{
    int arr[]={0,1,1,1,0,0,1,1};
    int size =8;

    // Calling function
    countZeroOne(arr,size);
}