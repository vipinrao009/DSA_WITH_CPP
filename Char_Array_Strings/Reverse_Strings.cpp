#include<iostream>
using namespace std;
#include <cstring>

void reverseString(char ch[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}

int main()
{
    char ch[100];
    cout<<"Enter the String :";
    cin>>ch;
    int len=strlen(ch);

    reverseString(ch,len);
    cout<<"Reverse string : "<<ch;
}