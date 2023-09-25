// lower case to uppercase

#include <iostream>
using namespace std;

void upperCase(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cout << "Enter the Strings : ";
    cin.getline(ch, 100);
    
    upperCase(ch, 100);
    cout << "UPPERCASE :" << ch;
}