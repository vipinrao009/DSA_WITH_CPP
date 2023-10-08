#include<iostream>
using namespace std;

void solve(int arr[],int size)
{
    cout<<"In Function arr :"<<arr<<endl;
    cout<<"In Function &arr :"<<&arr<<endl;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    
    int size =5;
    solve(arr,size);

    cout<<"Inside main arr :"<<arr<<endl;
    cout<<"Inside main &arr :"<<&arr<<endl;

}