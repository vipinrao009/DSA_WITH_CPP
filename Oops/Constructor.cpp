#include<iostream>
using namespace std;

class student 
{
   private:
   string gf;
   string bf;

   void chatting()
   {
    cout<<"Chatting";
   }
   
    public:
    int age;
    int id;
    string name;
    bool present;
    string gender;

    //default ctor => store the garbage value
    student()
    {
        cout<<"default ctor called";
    }

    //parameterized ctor
    student(int _age,int _id, string _name,bool _present, string _gender,string _gf)
    {
       age = _age;
       id = _id;
       name = _name;
       present =_present;
       gender = _gender;
       gf= _gf;
       cout<<"Parameterized ctor called"<<endl;
    }
   //properties or state or attribute

};

int main()
{
    student s1;
    // s1.student();

    student s2(14,1,"Vipin",1,"male","Sivangi");

    //alocat on heap
    student *s3 = new student(16,1,"Ashis",1,"male","suman");
    cout<<s3->name<<endl;
    delete s3; // no leak
    
    cout<<s2.name<<endl;
    return 0;
}