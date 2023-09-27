//Remove all the adjecent duplicates value in string

#include<iostream>
using namespace std;

string removeDuplicate(string s)
{
    //step 01 : create temp string
    string temp ="";
    int end=s.length();
    int start=0;

    while(start<end)
    {
        //step 02 > compare input string element with right most element of temp string
        // if both element are same the pop_back
        if(s[start]==temp[temp.length()-1])
        {
            temp.pop_back();
        }
        else
        {
            //when both element are different then push_back in to temp 
            temp.push_back(s[start]);
        }
        start++;
    }
    return temp;
}

int main()
{
    string s;
    cout<<"Enter the String : ";
    cin>>s;
    cout<<"After removed duplicate value : "<<removeDuplicate(s);
    return 0;
}
