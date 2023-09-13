//Que: i) Create 5 size array
//    ii) Take input in that array
//   iii) Total sum print

#include<iostream>
using namespace std;

int main()
{
    //create array
    int arr[5];

    //Taking input
    int n=5;
    cout<<"Enter the Value: ";
    for(int i=0; i<n; i++)
    {
       cin>>arr[i];
    }

    //Sum of the array
    int sum = 0;
    for(int i=0; i<n; i++)
    {
       sum = sum + arr[i];
    }

    // Printing sum
    cout<<"Sum of Array: "<<sum;
    

}