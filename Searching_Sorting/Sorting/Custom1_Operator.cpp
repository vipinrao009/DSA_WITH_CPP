//#inclu
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<vector<int>>&arr)
{
    int n = arr.size();

    for(int i=0; i<n; i++)
    {
        vector<int>&temp=arr[i];
        int a =temp[0];
        int b =temp[1];

        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
}

bool myComp(vector<int>&a, vector<int>&b)
{
    // return a[1]<b[1]; // increasing order
    return a[1]>b[1]; // decreasing order
}

int main()
{
    vector<vector<int> > arr;
    int n;
    cout<<"Enter The Size :";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the A,B"<<endl;
        int a ,b;
        cin>>a>>b;

        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);

        arr.push_back(temp);
    }

    cout<<"Here are the value"<<endl;
    print(arr);

    cout<<"Sorted by 1st index"<<endl;
    sort(arr.begin(),arr.end(),myComp);
    print(arr);
    return 0;

}