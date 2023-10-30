#include<iostream>
using namespace std;

class  student
{
   private:
   int a; 
   int b;
   
   public:
   int age;
   int id;
   string name;
   bool present;
   string gender;
   string gf;

   //method

   void eat()
   {
      cout<<"I am eating";
   }

   void sleeping()
   {
    cout<<"I am sleeping";
   }

   void chating()
   {
    cout<<"I am chating";
   }
    
   //Parameterized ctor
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
   //get name 
   string getGfName()
   {
    return gf;
   }

   //setter
   void setGfName(string _gf)
   {
      gf = _gf;
   }

};

int main()
{
    student s1(20,1,"Vipin",1,"Male","Shivangi");
    cout<<s1.age<<endl;
    

    //s1.setGfName("Priya");
    cout<<s1.getGfName();
    

    return 0;
}


/*
    Note : 

    get and set is used to access the private value 
*/


