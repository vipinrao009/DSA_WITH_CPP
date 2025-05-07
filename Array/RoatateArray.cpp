#include<iostream>
using namespace std;

void roatate(int arr[], int size, int k){
    // Step 1: Store last k elements in temp array
    int temp[k];
    for(int i = 0; i<= k; i++){
        temp[i] = arr[size-k+i];
    }

    // Step 2: Shift the rest of the array right by k positions
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy temp back to front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main(){
    int array[] = {2,4,6,8,10,12};
    int size = 6;
    int k =3;

    roatate(array,size,k);
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}