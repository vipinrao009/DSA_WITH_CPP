#include<iostream>
using namespace std;

void quickSort(int arr[], int low, int high)
    {
        // Base case
        if(low>=high) return;
        
        int pivot  = high;
        int i = low-1;
        int j = low;
        
        while(j<pivot)
        {
            if(arr[j]<arr[pivot])
            {
                i++;
                swap(arr[i],arr[j]);
            }
            j++;
        }
        i++;
        swap(arr[i],arr[pivot]);
        
        // RECURSIVE CALL FOR LEFT ARRAY
        quickSort(arr,low,i-1);
        // RECURSIVE CALL FOR RIGHT ARRAY
        quickSort(arr,i+1,high);
        
    }

    int main()
    {
    int arr[] = {1,3,4,8,2,2,2,2,5};
    int size = 9;
    int low = 0;
    int high = size-1;

    cout << "Before Quick sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
    
    quickSort(arr,low,high);
    cout << "After Quick sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
    }