#include<iostream>
using namespace std;

int main()
{
    // string s;
    // cout<<"Enter the String : ";
    // cin>>s;
    // string temp ="";
    
    //length
    // cout<<"The length of string "<<s.length()<<endl;
    // cout<<"String is empty or not : "<<temp.empty()<<endl;
    // cout<<"Charactor at position ith is :"<<s.at(3)<<endl;
    // cout<<"Front charactor of string : "<<s.front();
    // cout<<"End charactor of string : "<<s.back();

    //Append 
    // string st1 ="Vipin";
    // string st2= "Kumar";

    // st1.append(st2);

    // cout<<endl<<"After Appending : ";
    // cout<<st1<<endl;

    // //erase
    // string desc="This is a car";
    // cout<<desc.erase(4,3);
    
    //Insert
    string name1="Vipin ji";
    string middle=" Kumar";
    cout<<name1.insert(5,middle)<<endl;

    //find function
    string name2="Yaar tera super star desi kalakaar";
    string part ="stariiiii";

    if(name2.find(part)==string::npos)
    {
        //not found
        cout<<"NOT Found !!"<<endl;
    }
    else
    {
        cout<<"Found !!"<<endl;
    }

    //compare string

    string v1 ="VIPIN";
    string v2 ="vipin";

    if(v1.compare(v2)==0)
    {
        cout<<"Mached !!"<<endl;
    }
    else
    {
        cout<<"Not Mached !!"<<endl;
    }

    //find the substring from string

    string des = "This is a car and it is big Daddy of all suvs";
    cout<<des.substr(28,5);
}