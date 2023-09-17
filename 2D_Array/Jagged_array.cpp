//create jagged array using 2D vector

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> >arr;

    vector<int>v1(10,0);
    vector<int>v2(5,1);
    vector<int>v3(2,3);
    vector<int>v4(8,4);

    arr.push_back(v1);
    arr.push_back(v2);
    arr.push_back(v3);
    arr.push_back(v4);

    //Print jagged array

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}