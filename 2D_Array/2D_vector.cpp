//create 2D array using 2d vector
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> >arr(5,vector<int>(10,0));

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[0].size(); j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
