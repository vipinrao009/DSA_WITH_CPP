// convert the uupercase to lowercase

#include <iostream>
using namespace std;

void lowerCase(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if(ch[index]>='A' && ch[index]<='Z')
        {
            ch[index]=ch[index]-'A'+'a';
        }
        index++;
    }
}

int main()
{
    char ch[100];

    cout<<"Enter the string : ";
    cin.getline(ch,100);
    lowerCase(ch,100);

    cout<<"Lowercase : "<<ch;
}