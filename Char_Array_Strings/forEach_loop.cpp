#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string str = "VIPIN KUMAR";
    for(auto h:str)
    {
        cout<<h;
    }
    return 0;

    vector<int> v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);

    for(auto NUM:v)
    {
        cout<<NUM<<" ";
    }
    cout<<endl;


}