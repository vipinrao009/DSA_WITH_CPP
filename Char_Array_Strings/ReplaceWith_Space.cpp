//Replace @ with space 

#include<iostream>
using namespace std;

void replace(char ch[],int size)
{
    int index=0;
    while(ch[index] !='\0')
    {
        if(ch[index]=='@')
        {
            ch[index]=' ';
        }
    }
    index++;
}

int main()
{
    char ch[100];
    cout<<"Enter the String :";
    cin.getline(ch,100);

    replace(ch,100);
    cout<<"The new value :"<<ch;
}