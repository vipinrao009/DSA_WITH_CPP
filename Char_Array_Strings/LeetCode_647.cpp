
#include <iostream>
using namespace std;

int expand(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        j++;
        i--;
    }
    return count;
}
int countSubstrings(string s)
{

    int totalCount = 0;
    int center = 0;

    while (center < s.length())
    {
        // Step 01 => ODD
        int OddCount = expand(s, center, center);

        // Step 02 => EVEN
        int EvenCount = expand(s, center, center + 1);

        // Step 03 => Total Count
        totalCount = totalCount + OddCount + EvenCount;

        // Increase Center
        center++;
    }
    return totalCount;
}

int main()
{
    string s ="ABA";
    int ans = countSubstrings(s);

    cout<<"The Palindromic Subsstring: "<<ans;
}