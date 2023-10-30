#include<iostream>
using namespace std;

class Bird
{
   public:
   int age;
   int leg;
   string color;
   int weight;

   //method 
   void flying()
   {
    cout<<"Bird is flying";
   }

   void eating()
   {
    cout<<"Bird is eating";
   }
};

class parroat:private Bird
{ 
    public:
    parroat(int age,int leg,string color,int weight)
    {
        cout<<"Parroat C tor is called";
        this->age = age;
        this->leg = leg;
        this->color = color;
        this->weight = weight;
    }
    void speaking()
    {
        cout<<"Parroat is speaking";
    }

};

class cow:protected Bird
{ 
    public:
    cow(int age,int leg,string color,int weight)
    {
        cout<<"Parroat C tor is called";
        this->age = age;
        this->leg = leg;
        this->color = color;
        this->weight = weight;
    }
    void Cowing()
    {
        cout<<"Cow is speaking";
    }

};

int main()
{
    parroat s1(20,2,"White",2);
    // s1.age;  we can't access because it's private line 24

    cow c1(2,2,"Blace",4);
    // c1.age;  we can't access because it's protected line 42
    return 0;
}

/*
     note :
    1 :) jab aap visiblity mode private karate hai to app access nahi kar payenge and derived bhi nahi kar payenge 

    2:)  jab aap visiblity mode protected karate hai to app access nahi kar payenge but usko aap derived kar sakte hai 

*/