#include<iostream>
using namespace std;

int binarySearch(int a[],int start, int end, int target){
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(a[mid] == target){
            return mid;
        }
        else if (a[mid] < target)
        {
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        
    }
    
}

int exponentialSearch(int a[], int n, int x){
    if(a[0] == x )return 0;

    int i = 1;
    while (i<n && a[i] <= x){
        i = i*2;
    }
    return binarySearch(a,i/2,min(i,n-1),x);
    
}

int main(){

    int a[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a) / sizeof(int);
    int x = 15;
    int ans = exponentialSearch(a,n,x);
    cout<<"Target is found & index is" <<" "<<ans;
    return 0;
}