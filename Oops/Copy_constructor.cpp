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

   //copy ctor

   student(const student &srcObject)
   {
    
    age = srcObject.age;
    id = srcObject.id;
    name = srcObject.name;
    present = srcObject.present;
    gender = srcObject.gender;
    gf = srcObject.gf;
    cout<<"Copy ctor is called"<<endl;

   }
};

int main()
{
    student s1(20,1,"Vipin",1,"Male","Shivangi");
    cout<<s1.age<<endl;
    student s2= s1;

    return 0;
}


/*
    Note : 

    1: We can copy the data in another object through this syntex without creating copy constructor
    student s2(s1);

    2: copy ctor ka obj banate samay hi value ko copy kar dena chahiye (it's good practice)

    3: line 49 par copy ctor me const liya gya hai kyuki jab main se data aayega to copy ctor to data ka misuse or change hone ka dar hai isi liye const liya gya hai taki koi data ka misuse or change na kar sake 


    Why need of copy constructor ???????
    when we need to use deep copy then we 

    deep copy :=>
                
*/


