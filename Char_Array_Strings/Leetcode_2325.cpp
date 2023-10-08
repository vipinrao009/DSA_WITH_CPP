#include<iostream>
using namespace std;

string decodeMessage(string key,string message)
{
    //create mapping 
    char mapping[300]={0};
    char start = 'A';

    for(auto ch:key)
    {
        if(ch != ' ' && mapping[ch]==0)
        {
            mapping[ch]=start;
            start++;
        }
        
    }

    //Use mapping
    string ans;

    for(int i=0; i<message.length(); i++)
    {
        char ch = message[i];
        char decoded =mapping[ch];
        ans.push_back(decoded);
    }
    return ans;

}

int main()
{
    string key ="the quick brown fox jump over the lazy dog";
    string message="vkbs bs t suepuv";

    string ans=decodeMessage(key,message);

    for(auto ch:ans)
    {
        cout<<ans<<" ";
    }
}