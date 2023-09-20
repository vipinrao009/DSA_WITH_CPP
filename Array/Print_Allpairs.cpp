//Print All Pairs

#include<iostream>
using namespace std;

void PrintAllPairs(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<arr[i]<<" "[j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
   int arr[]={10,20,30};
   int size =3;

   PrintAllPairs(arr,size);
}