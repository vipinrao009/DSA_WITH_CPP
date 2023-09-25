// Check palindrone

#include <iostream>
#include <cstring>
using namespace std;

bool CheckPalindrone(char ch[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (ch[start] == ch[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
        // agar yaha tak pahunch gye to iska mtlb saare element match kar gye
        // iska matlb palindrone h
        // to return kar do true

        return true;
    }
}

int main()
{
    char ch[100];
    cout<<"Enter the strings : ";
    cin.getline(ch,100);
    
    int length=strlen(ch);
    bool isPalidrone=CheckPalindrone(ch,length);

    if(isPalidrone)
    {
        cout<<"Valid Palidrone !!";
    }
    else
    {
        cout<<"Invalid Palidrone !!";
    }
}
