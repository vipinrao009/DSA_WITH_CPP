// Valid palindrome II
#include <iostream>
using namespace std;

bool checkPalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    // agar yha tak aa gye that means palindrome h
    return true;
}

bool validPalindrome(string s)
{
    int start = 0;
    int N = s.length();
    int end = N - 1;

    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            // only one removal is allowed
            // check palindrome for remaining string after removal

            // s[start] => remove
            bool ans1 = checkPalindrome(s, start + 1, end);

            // s[end] => remove
            bool ans2 = checkPalindrome(s, start, end - 1);
            return ans1 || ans2;
        }
    }
    return true;
}

int main()
{
    string s ="ABCA";
    bool ans=validPalindrome(s);

    if(ans)
    {
        cout<<"Valid Palindrome !!";
    }
    else
    {
        cout<<"Not Valid Palindrome !!";
    }
}