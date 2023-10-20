#include<iostream>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = (start+end)/2;
    // Step 01=> find the length of left and right part of array
    int lenLeft = mid - start +1;
    int lenRight = end-(mid+1)+1;

    // Step 02=> Create left and right part of array
    int *left = new int[lenLeft];
    int *right =new int[lenRight];

    // step 03=> Copy the value from original array to left and right part of array 

    int k=start; 
    // k=> starting index of thr left array value in original array
    //Copy value from original array to left array
    for(int i=0; i<lenLeft; i++)
    {
        left[i] = arr[k];
        k++;
    }

    //Copy value from original array to right array
    k = mid+1;
    for(int i=0; i<lenRight; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // left array is already sorted
    // right array is already sorted

    int leftIndex = 0;
    int rightIndex = 0;

    // Yahi par sabhi galti karate hai
    int mainArrayIndex = start;

    while(leftIndex<lenLeft && rightIndex<lenRight)
    {
        if(left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // 2 Cases
    // 1 Case => left array exhaust but right array ke element abhi bhi hai
    while(rightIndex<lenRight)
    {
        arr[mainArrayIndex]=right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    // 2 Case => right array exhaust but left array ke element abhi bhi hai
    while(leftIndex<lenLeft)
    {
        arr[mainArrayIndex]=left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    // Don't forget to de-allocate the dynamic array
    delete[] left;
    delete[] right;

}

void mergeSort(int arr[], int start, int end)
{
    // Base case
    if(start>=end)
    {
        return;
    }

    // Break into two part
    int mid = (start+end)/2;
    
    // Recursive call for left array
    mergeSort(arr,start,mid);

    // Recursive call for right array
    mergeSort(arr,mid+1,end);

    // merge 2 sorted array
    merge(arr,start,end);



}

int main()
{
    int arr[] = {2,1,9,7,4,6};
    int size = 6;
    int start = 0;
    int end = size-1;

    cout << "Before merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
    
    mergeSort(arr,start,end);
    cout << "After merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}