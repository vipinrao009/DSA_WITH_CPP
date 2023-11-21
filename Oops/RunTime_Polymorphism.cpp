#include<iostream>
using namespace std;

class Animal
{
   public:
   virtual void makeSound()
   {
    cout<<"Animal makes sound"<<endl;
   }
};

class Dog : public Animal
{
    public:
    void makeSound()
    {
        cout<<"Dog makes sound"<<endl;
    }
};

class Cat : public Animal
{
   public:
   void makeSound()
   {
    cout<<"Cat makes sound"<<endl;
   }
};

class Parroat : public Animal
{
   public:
   void makeSound()
   {
    cout<<"Parroat makes sound"<<endl;
   }
};

void makeSound(Animal*animal)
{
    animal->makeSound();
}

int main()
{

    Animal *a = new Dog();
    makeSound(a);

    a= new Cat();
    makeSound(a);

    a= new Parroat();
    makeSound(a);
    return 0;
}

/*
   Note: 
   1: UPCASTING :> It's using the super/parent class's reference or pointer to refer to a Sub/Child class's object

   2: DOWNCASTING :) It's using the Sub/Child class;s reference or pointer to refer a Super/Parent class's object

   3: FUNCTION OVERLOADING :) It is the process of defining with the same name and parameter as a function in base class in a derived class 
   
   4: VIRTUAL FUNCTION => i. This is the way of do late binding 
                          ii. It take the decision on run tiome
                          iii. yeh ek tarika hai funcion ko virtual banane par usko com[ile time par seriously na lene ka

                          iv. It can always be written in parent class
                          v. Without virtual early binding, static binding
                          vi. With virtual late binding, dynamic binding
 
*/