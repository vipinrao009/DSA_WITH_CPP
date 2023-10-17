#include<iostream>
#include<limits.h>

using namespace std;

int MaxNo(int arr[],int size,int index, int &mix)
{
    // Base case
    if(index>=size)
    {
        return 0;
    }
    // Processing 
    mix = max(arr[index],mix);

    //Recursive call
    MaxNo(arr,size,index+1,mix);

}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    int mix = INT_MIN;
    MaxNo(arr,size,index,mix);

    cout<<"Maximum No : "<<mix;

}
