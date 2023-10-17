#include<iostream>
using namespace std;

bool Serach(int arr[],int index,int size , int target)
{
    // Base case
    if(index>=size)
    {
        return false;
    }

    // Processing 
    if(arr[index]==target)
    {
        return true;
    }

    // Recurrence relation
    bool ans = Serach(arr,index+1,size,target);
    return ans;
}

int main()
{
    int arr[]= {10,20,30,40,50};
    int index = 0;
    int size = 5;
    int target = 50;
    bool ans1= Serach(arr,index,size,target);
    
    if(ans1)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }

    return 0;
}