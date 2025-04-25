#include<iostream>
using namespace std;

void shiftArr(int arr[],int size){
    //step 1 => store last element in temp varible
    int temp = arr[size -1];

    //step 2 => shift all the element
    for(int i =size -1; i>=1; i--){
        arr[i] = arr[i-1];
    } 
    //step 3 => paste the temp varible at the 0 index
    arr[0] = temp;
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;

    shiftArr(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}