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
   int *ptr;

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
       ptr = new int(10);
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

   //dtor 
   ~student()
   {
    cout<<"DTor is called";
    delete ptr;
   }
};

int main()
{
    student s1(20,1,"Vipin",1,"Male","Shivangi");
    cout<<s1.age<<endl;
    //student s2= s1;

    return 0;
}


/*
    Note : 

    DESTRUCTOR:=>
                It is used to delete the constructor . when all the constructor are executed then it's delete the constructor while return the function in main function
                
                it is also used to delete the which is created in heap and dealocate the memory where destructor are called 
    
    2: it is denotes by ~.
                
*/


