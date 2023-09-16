// Find the peak element in given array

#include<iostream>
using namespace std;

int PeakElement(int arr[],int size)
{
    int s=0;
    int e = size-1;
    int mid = s + (e-s)/2;
    

    while(s<e)
    {
        //Rule 01:
        if(arr[mid]>arr[mid+1])
        {
            //Aap B wale part par ho 
            //shift to left
            e=mid;
            
        } 
        else 
        {
           //aap A wale part par ho 
           //shift to right 
           s=mid+1;
        }
        
        //update mid
        mid = s + (e-s)/2;
    }
    return s;
    
}
 

int main()
{
    int arr[]={10,20,30,90,70,60,50,40};
    int size=8;
    int ans = PeakElement(arr,size);
    
    cout<<"Peak element is: "<<ans;

   

}