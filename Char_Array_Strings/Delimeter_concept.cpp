#include<iostream>
using namespace std;

int main()
{
    char ch[10];
    cout<<"Enter the Strings: ";

    //cin>>ch;

    cin.getline(ch,10);

    cout<<"The String is: "<<ch;
}