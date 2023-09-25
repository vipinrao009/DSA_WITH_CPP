#include <iostream>
using namespace std;

int findLenght(char ch[], int size)
{
    int length = 0;
    while(ch[length] !='\0')
    {
      length++;
    }
    return length;

    /*for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            // ruk jao
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
    */
}

int main()
{
    char ch[100];
    cout << "Enter the value: ";
    cin.getline(ch, 100);
    int ans = findLenght(ch, 100);
    cout << "Length is : " << ans;
}