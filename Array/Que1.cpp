//Que: i) Create 10 size array
//    ii) Take input in that array
//   iii) Double each value in array

#include<iostream>
using namespace std;

int main()
{
   //i
   int arr [10];

   //taking input
   int n = 10;
   cout<<"Enter the value: ";
   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }

   //double up
   for(int i=0; i<n; i++)
   {
      arr[i]=arr[i]*2;
   }

   //print array
   cout<<"Double up Array: ";
   for(int i=0; i<n; i++)
   {
    cout<<arr[i]<<" ";
   }
   


}