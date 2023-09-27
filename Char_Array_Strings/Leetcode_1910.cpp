//Remove all the occurrenece of substring 

#include<iostream>
using namespace std;

string RemoveSubstring(string s,string part)
{
    while(s.find(part) != string::npos)
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s="DAABCBAABCBC";
    string part="ABC";
    cout<<"Before removing :"<<s<<endl;
    cout<<"After removing :"<<RemoveSubstring(s,part);
}